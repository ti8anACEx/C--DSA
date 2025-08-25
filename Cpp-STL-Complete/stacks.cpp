#include <iostream>
#include <stack> // Include the stack header file

/* 
 * A stack is a linear data structure that follows the Last In First Out (LIFO) principle.
 * Elements are added (pushed or emplaced) and removed (popped) from the top of the stack.
 */

int main() {
    // Create two stacks of integers
    std::stack<int> s1, s2;

    // Check if the stack is empty
    if(s1.empty()) {
        std::cout << "Stack s1 is empty." << std::endl; // Output: Stack s1 is empty.
    }

    // Push elements onto the stack
    s1.push(10);
    s1.push(20);
    s1.push(30);

    // Output the top element
    std::cout << "Top element of s1: " << s1.top() << std::endl; // Output: Top element of s1: 30

    // Pop an element off the stack
    s1.pop();

    // Output the top element after pop
    std::cout << "Top element of s1 after pop: " << s1.top() << std::endl; // Output: Top element of s1 after pop: 20

    // Output the stack size
    std::cout << "Stack s1 size: " << s1.size() << std::endl; // Output: Stack s1 size: 2

    // Push another element
    s1.push(40);

    // Output the stack size after pushing
    std::cout << "Stack s1 size after push: " << s1.size() << std::endl; // Output: Stack s1 size after push: 3

    // Use emplace to add an element
    s1.emplace(50);

    // Output the top element after emplace
    std::cout << "Top element of s1 after emplace: " << s1.top() << std::endl; // Output: Top element of s1 after emplace: 50

    // Swap the contents of s1 and s2
    s1.swap(s2);

    // Output the top element of s2 after swap
    std::cout << "Top element of s2 after swap: " << s2.top() << std::endl; // Output: Top element of s2 after swap: 50

    // Check if s1 is empty after swap
    if(s1.empty()) {
        std::cout << "Stack s1 is empty after swap." << std::endl; // Output: Stack s1 is empty after swap.
    }

    // you can declare and initialize std::stack and std::queue in the same line, similar to how you would with std::vector. However, unlike std::vector, std::stack and std::queue are container adaptors, which means they rely on an underlying container (like std::deque or std::list) to store elements.

    // You can initialize a std::stack using an std::deque (which is the default underlying container) or an std::vector.

    // Initialize stack with std::deque
    std::stack<int, std::deque<int>> stack_deque({10, 20, 30});

    // Output the top element
    std::cout << "Top element of stack (deque): " << stack_deque.top() << std::endl; // Output: 30

    // // Initialize stack with std::vector
    // std::stack<int, std::vector<int>> stack_vector({40, 50, 60});

    // // Output the top element
    // std::cout << "Top element of stack (vector): " << stack_vector.top() << std::endl; // Output: 60

    return 0;
}
