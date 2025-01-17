#include <iostream>
#include <queue> // Include the priority_queue header file
#include <vector>

/*
 * A priority_queue is a container adaptor that provides constant time lookup of the largest (by default) or smallest element.
 * It is implemented as a max-heap by default, but can be customized to function as a min-heap.
 */

int main() {
    // Create a max-heap priority queue of integers
    std::priority_queue<int> pq;

    // Check if the priority queue is empty
    if (pq.empty()) {
        std::cout << "Priority queue is empty." << std::endl; // Output: Priority queue is empty.
    }

    // Push elements onto the priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);

    // Output the top element
    std::cout << "Top element (max-heap): " << pq.top() << std::endl; // Output: Top element (max-heap): 30

    // Pop an element off the priority queue
    pq.pop();

    // Output the top element after pop
    std::cout << "Top element after pop (max-heap): " << pq.top() << std::endl; // Output: Top element after pop (max-heap): 20

    // Output the priority queue size
    std::cout << "Priority queue size: " << pq.size() << std::endl; // Output: Priority queue size: 2

    // Use emplace to add an element
    pq.emplace(40);

    // Output the top element after emplace
    std::cout << "Top element after emplace (max-heap): " << pq.top() << std::endl; // Output: Top element after emplace (max-heap): 40

    // Create a min-heap priority queue using a custom comparator
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;

    // Push elements onto the min-heap priority queue
    min_pq.push(10);
    min_pq.push(20);
    min_pq.push(30);

    // Output the top element of the min-heap
    std::cout << "Top element (min-heap): " << min_pq.top() << std::endl; // Output: Top element (min-heap): 10

    return 0;
}

/*
Theory Regarding Priority Queue
Priority Queue: A priority queue is a container adaptor that provides constant time lookup of the largest (by default) or smallest element. Elements are added with a priority, and the highest priority element is always at the front.

Use Cases: Priority queues are used for applications like task scheduling, Dijkstra's algorithm for shortest paths, and managing the order of events in simulations.

Efficiency: The primary operations (push, pop, top, empty, size, and emplace) of a priority queue have logarithmic time complexity, O(log n).

Discussion on Max-Heap, Min-Heap, and Complete Binary Trees (CBTs)
Max-Heap: A max-heap is a complete binary tree where the value of each node is greater than or equal to the values of its children. The largest value is at the root, and it's used to implement a max-priority queue.

Min-Heap: A min-heap is a complete binary tree where the value of each node is less than or equal to the values of its children. The smallest value is at the root, and it's used to implement a min-priority queue.

Complete Binary Trees (CBTs): A complete binary tree is a binary tree in which all levels are fully filled except possibly for the last level, which is filled from left to right. Heaps are typically implemented using arrays for efficient indexing.

This example covers the basic functionalities of the C++ STL priority_queue container and provides theoretical insights into heaps and complete binary trees. Feel free to ask if you have any more questions or need further details!
*/