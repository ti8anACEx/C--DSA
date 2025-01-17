#include <iostream>
#include <set> // Include the set header file

/*
 * A set is an associative container that stores unique elements in a specific order (MEANS SORTED!!).
 * It is implemented as a balanced binary search tree.
 */

int main() {
    // Create a set of integers
    std::set<int> s;

    // Insert elements into the set
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);

    // Output the elements in the set
    for (const auto& element : s) {
        std::cout << element << " "; // Output: 10 20 30
    }
    std::cout << std::endl;

    // Check if an element exists
    if (s.find(20) != s.end()) {
        std::cout << "Element 20 exists." << std::endl; // Output: Element 20 exists.
    }

    // Output the size of the set
    std::cout << "Set size: " << s.size() << std::endl; // Output: Set size: 3

    // Erase an element
    s.erase(20);

    // Output the size of the set after erasure
    std::cout << "Set size after erasure: " << s.size() << std::endl; // Output: Set size after erasure: 2

    // Lower bound and upper bound
    auto lb = s.lower_bound(15);
    auto ub = s.upper_bound(30);
    std::cout << "Lower bound for 15: " << *lb << std::endl; // Output: Lower bound for 15: 20
    std::cout << "Upper bound for 30: " << *ub << std::endl; // Output: Upper bound for 15: 40 IMPORTANT!!

    // EXPLANATION :::::::

    // lower_bound(const key_type& k) -> iterator: Returns an iterator pointing to the first element that is not less than (i.e., greater or equal to) the given key.
    // Example: s.lower_bound(15)
    // Output: Returns an iterator to the element 20 or the end.

    // upper_bound(const key_type& k) -> iterator: Returns an iterator pointing to the first element that is greater than the given key.
    // Example: s.upper_bound(15)
    // Output: Returns an iterator to the element 20 or the end.

    return 0;
}
