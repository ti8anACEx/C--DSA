#include <iostream>
#include <unordered_map> // Include the unordered_map header file

/*
 * An unordered_map is an associative container that stores elements in key-value pairs with unique keys.
 * It is implemented as a hash table, providing average constant time complexity for insertions, deletions, and lookups.
 */

int main() {
    // Create an unordered_map of integers
    std::unordered_map<int, std::string> um;

    // Insert elements into the unordered_map
    um.insert({1, "one"});
    um.insert({2, "two"});
    um.insert({3, "three"});

    // Output the value associated with a key
    std::cout << "Value for key 2: " << um[2] << std::endl; // Output: Value for key 2: two

    // Modify an element
    um[2] = "TWO";

    // Output the modified value
    std::cout << "Modified value for key 2: " << um[2] << std::endl; // Output: Modified value for key 2: TWO

    // Check if a key exists
    if (um.find(3) != um.end()) {
        std::cout << "Key 3 exists." << std::endl; // Output: Key 3 exists.
    }

    // Output the size of the unordered_map
    std::cout << "Unordered_map size: " << um.size() << std::endl; // Output: Unordered_map size: 3

    // Erase an element by key
    um.erase(1);

    // Output the size of the unordered_map after erasure
    std::cout << "Unordered_map size after erasure: " << um.size() << std::endl; // Output: Unordered_map size after erasure: 2

    return 0;
}
