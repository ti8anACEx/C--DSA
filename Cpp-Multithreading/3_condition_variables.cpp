// condition_variables.cpp - learn about the needs of CVs and the classic producer-consumer problem

// CV basic example
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;   // shared flag

// Worker thread: waits until "ready" becomes true
void worker() {
    std::unique_lock<std::mutex> lock(mtx);    // take lock
    std::cout << "[Worker] Waiting for signal...\n";

    // wait until ready == true
    cv.wait(lock, [] { return ready; });

    std::cout << "[Worker] Got the signal! Starting work...\n";
}

int main() {
    std::thread t(worker);

    // simulate some work in main
    std::this_thread::sleep_for(std::chrono::seconds(2));

    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;    // set flag
        std::cout << "[Main] Sending signal now...\n";
    }

    cv.notify_one();   // wake up the worker

    t.join();
    std::cout << "=== Done ===\n";
}
