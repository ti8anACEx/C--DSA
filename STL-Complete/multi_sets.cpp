#include <iostream>
#include <set> // Include the multiset header file

/*
 * A multiset is an associative container that stores elements in a specific order, allowing multiple instances of the same element.
 * It is implemented as a balanced binary search tree.
 */

int main() {
    // Create a multiset of integers
    std::multiset<int> ms;

    // Insert elements into the multiset
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(30);

    // Output the elements in the multiset
    for (const auto& element : ms) {
        std::cout << element << " "; // Output: 10 20 20 30
    }
    std::cout << std::endl;

    // Count occurrences of an element
    std::cout << "Count of 20: " << ms.count(20) << std::endl; // Output: Count of 20: 2

    // Output the size of the multiset
    std::cout << "Multiset size: " << ms.size() << std::endl; // Output: Multiset size: 4

    // Erase an element
    ms.erase(20);

    // Output the size of the multiset after erasure
    std::cout << "Multiset size after erasure: " << ms.size() << std::endl; // Output: Multiset size after erasure: 2

    // Lower bound and upper bound
    auto lb = ms.lower_bound(15);
    auto ub = ms.upper_bound(15);
    
    std::cout << "Lower bound for 15: " << (*lb) << std::endl; // Output: Lower bound for 15: 20
    std::cout << "Upper bound for 15: " << (*ub)  << std::endl; // Output: Upper bound for 15: 20

    return 0;
}
