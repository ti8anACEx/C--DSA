#include <iostream>
#include <map> // Include the multimap header file

/*
 * A multimap is an associative container that stores elements in key-value pairs, where keys can have multiple values.
 * It is implemented as a balanced binary search tree.
 */

int main() {
    // Create a multimap of integers
    std::multimap<int, std::string> mm;

    // Insert elements into the multimap
    mm.insert({1, "one"});
    mm.insert({2, "two"});
    mm.insert({2, "TWO"});
    mm.insert({3, "three"});

    // Output the values associated with a key
    auto range = mm.equal_range(2);
    std::cout << "Values for key 2: ";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->second << " "; // Output: Values for key 2: two TWO
    }
    std::cout << std::endl;

    // Output the size of the multimap
    std::cout << "Multimap size: " << mm.size() << std::endl; // Output: Multimap size: 4

    // Check if a key exists
    if (mm.find(3) != mm.end()) {
        std::cout << "Key 3 exists." << std::endl; // Output: Key 3 exists.
    }

    // Erase an element by key
    mm.erase(1);

    // Output the size of the multimap after erasure
    std::cout << "Multimap size after erasure: " << mm.size() << std::endl; // Output: Multimap size after erasure: 3

    return 0;
}
