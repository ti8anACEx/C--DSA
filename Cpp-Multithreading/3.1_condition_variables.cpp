// condition_variables.cpp - learn about the needs of CVs and the classic producer-consumer problem

// CV Producer-Consumer example
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

std::queue<int> buffer;           // Shared buffer
const unsigned int maxBufferSize = 5;

std::mutex mtx;
std::condition_variable cv;

bool done = false; // signal producer finished

// Producer: puts numbers into buffer
void producer() {
    for (int i = 1; i <= 10; i++) {
        std::unique_lock<std::mutex> lock(mtx);

        // wait if buffer is full
        cv.wait(lock, []() { return buffer.size() < maxBufferSize; });

        buffer.push(i);
        std::cout << "[Producer] Produced: " << i << "\n";

        lock.unlock();
        cv.notify_all(); // wake up consumer(s)
    }

    // tell consumers we're done
    std::unique_lock<std::mutex> lock(mtx);
    done = true;
    lock.unlock();
    cv.notify_all();
}

// Consumer: takes numbers from buffer
void consumer(int id) {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);

        // wait until buffer has items or producer is done
        cv.wait(lock, []() { return !buffer.empty() || done; });

        if (!buffer.empty()) {
            int value = buffer.front();
            buffer.pop();
            std::cout << "[Consumer " << id << "] Consumed: " << value << "\n";

            lock.unlock();
            cv.notify_all(); // wake up producer
        } else if (done) {
            break; // exit loop if no more work
        }
    }
}

int main() {
    std::thread prod(producer);
    std::thread cons1(consumer, 1);
    std::thread cons2(consumer, 2);

    prod.join();
    cons1.join();
    cons2.join();

    std::cout << "=== Producer-Consumer demo finished ===\n";
    return 0;
}
