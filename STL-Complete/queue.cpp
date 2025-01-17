#include <iostream>
#include <queue> // Include the queue header file


/*
 * A queue is a linear data structure that follows the First In First Out (FIFO) principle.
 * Elements are added (pushed or emplaced) at the back and removed (popped) from the front.
 */

int main() {
    // Create a queue of integers
    std::queue<int> q;

    // Check if the queue is empty
    if (q.empty()) {
        std::cout << "Queue is empty." << std::endl; // Output: Queue is empty.
    }

    // Push elements onto the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Output the front and back elements
    std::cout << "Front element: " << q.front() << std::endl; // Output: Front element: 10
    std::cout << "Back element: " << q.back() << std::endl; // Output: Back element: 30

    // Pop an element off the queue
    q.pop();

    // Output the front element after pop
    std::cout << "Front element after pop: " << q.front() << std::endl; // Output: Front element after pop: 20

    // Output the queue size
    std::cout << "Queue size: " << q.size() << std::endl; // Output: Queue size: 2

    // Use emplace to add an element
    q.emplace(40);

    // Output the back element after emplace
    std::cout << "Back element after emplace: " << q.back() << std::endl; // Output: Back element after emplace: 40

    // Swap contents with another queue
    std::queue<int> q2;
    q2.push(100);
    q2.push(200);
    q.swap(q2);

    // Output front element of q2 after swap
    std::cout << "Front element of q2 after swap: " << q2.front() << std::endl; // Output: Front element of q2 after swap: 10

// you can declare and initialize std::stack and std::queue in the same line, similar to how you would with std::vector. However, unlike std::vector, std::stack and std::queue are container adaptors, which means they rely on an underlying container (like std::deque or std::list) to store elements.

    // You can initialize a std::queue using an std::deque (which is the default underlying container) or an std::list.

    // Initialize queue with std::deque
    std::queue<int, std::deque<int>> queue_deque({10, 20, 30});

    // Output the front element
    std::cout << "Front element of queue (deque): " << queue_deque.front() << std::endl; // Output: 10

    // Initialize queue with std::list
    // std::queue<int, std::list<int>> queue_list({40, 50, 60});

    // // Output the front element
    // std::cout << "Front element of queue (list): " << queue_list.front() << std::endl; // Output: 40


    return 0;
}
