#include <iostream>
#include <unordered_set> // Include the unordered_set header file

/*
 * An unordered_set is an associative container that stores unique elements in no particular order.
 * It is implemented as a hash table, providing average constant time complexity for insertions, deletions, and lookups.
 * NO CONCPET OF LOWER AND UPPER BOUNDS ARE THERE AS IT IS UNSORTED/UNORDERED
 */

int main() {
    // Create an unordered_set of integers
    std::unordered_set<int> us;

    // Insert elements into the unordered_set
    us.insert(10);
    us.insert(20);
    us.insert(30);

    // Output the elements in the unordered_set
    for (const auto& element : us) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Check if an element exists
    if (us.find(20) != us.end()) {
        std::cout << "Element 20 exists." << std::endl; // Output: Element 20 exists.
    }

    // Output the size of the unordered_set
    std::cout << "Unordered_set size: " << us.size() << std::endl; // Output: Unordered_set size: 3

    // Erase an element
    us.erase(20);

    // Output the size of the unordered_set after erasure
    std::cout << "Unordered_set size after erasure: " << us.size() << std::endl; // Output: Unordered_set size after erasure: 2

    return 0;
}
