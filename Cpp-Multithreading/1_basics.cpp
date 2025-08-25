// basics.cpp
#include <iostream>
#include <thread>

// ------------------- Example 1: Basic Thread -------------------
void function1() {
    std::cout << "[function1] Hello from thread!\n";
}

// ------------------- Example 2: Passing Arguments -------------------
void printNumber(int x) {
    std::cout << "[printNumber] Number: " << x << "\n";
}

int main() {
    // Example 1: Create and join a thread
    {
        std::cout << "=== Example 1: Basic Thread ===\n";
        std::thread t1(function1);
        t1.join();  // wait for the thread to finish
        std::cout << "[main] Back in main thread!\n\n";
    }

    // Example 2: Detach a thread
    {
        std::cout << "=== Example 2: Detached Thread ===\n";
        std::thread t2([]() {
            std::cout << "[lambda] Detached thread is running...\n";
        });
        t2.detach();  // runs independently
        std::cout << "[main] Main continues without waiting!\n\n";
    }

    // Example 3: Passing arguments to thread
    {
        std::cout << "=== Example 3: Passing Arguments ===\n";
        std::thread t3(printNumber, 42);
        t3.join();
        std::cout << "[main] Argument passed to thread successfully!\n\n";
    }

    // Example 4: Using a lambda directly
    {
        std::cout << "=== Example 4: Lambda Thread ===\n";
        std::thread t4([]() {
            std::cout << "[lambda] Hello from lambda thread!\n";
        });
        t4.join();
        std::cout << "[main] Lambda thread finished!\n\n";
    }

    std::cout << "=== All examples done! ===\n";
    return 0;
}
