// synchronization.cpp - learn about thread safety, global/shared data race conditions, mutex and lock_guard 
#include <iostream>
#include <thread>
#include <mutex>

// ------------------- Shared Resources -------------------
int counter = 0;
std::mutex mtx;

// ------------------- Example 1: Race Condition -------------------
void unsafe_increment() {
    for (int i = 0; i < 100000; i++) {
        counter++;  // unsafe!
    }
}

// ------------------- Example 2: Mutex -------------------
void safe_increment_mutex() {
    for (int i = 0; i < 100000; i++) {
        mtx.lock();
        counter++;
        mtx.unlock();
    }
}

// ------------------- Example 3: Lock Guard -------------------
void safe_increment_lockguard() {
    for (int i = 0; i < 100000; i++) {
        std::lock_guard<std::mutex> lock(mtx);  // auto lock & unlock
        counter++;
    }
}

int main() {
    // --- Race Condition Demo ---
    {
        std::cout << "=== Example 1: Race Condition ===\n";
        counter = 0;
        std::thread t1(unsafe_increment);
        std::thread t2(unsafe_increment);
        t1.join(); t2.join();
        std::cout << "[Race] Counter (not always 200000): " << counter << "\n\n";
    }

    // --- Fix with Mutex ---
    {
        std::cout << "=== Example 2: Mutex ===\n";
        counter = 0;
        std::thread t1(safe_increment_mutex);
        std::thread t2(safe_increment_mutex);
        t1.join(); t2.join();
        std::cout << "[Mutex] Counter (always 200000): " << counter << "\n\n";
    }

    // --- Fix with Lock Guard ---
    {
        std::cout << "=== Example 3: Lock Guard ===\n";
        counter = 0;
        std::thread t1(safe_increment_lockguard);
        std::thread t2(safe_increment_lockguard);
        t1.join(); t2.join();
        std::cout << "[LockGuard] Counter (always 200000): " << counter << "\n\n";
    }

    std::cout << "=== All threading demos done! ===\n";
    return 0;
}
