#include <iostream>
#include <map> // Include the map header file

/*
 * A map is an associative container that stores elements in key-value pairs.
 * Keys are unique, and each key is associated with a value. It is implemented as a balanced binary search tree.
 */

int main() {
    // Create a map of integers
    std::map<int, std::string> m;

    // Insert elements into the map
    m.insert({1, "one"});
    m.insert({2, "two"});
    m.insert({3, "three"});

    // Output the value associated with a key
    std::cout << "Value for key 2: " << m[2] << std::endl; // Output: Value for key 2: two

    // Modify an element
    m[2] = "TWO";

    // Output the modified value
    std::cout << "Modified value for key 2: " << m[2] << std::endl; // Output: Modified value for key 2: TWO

    // Check if a key exists
    if (m.find(3) != m.end()) {
        std::cout << "Key 3 exists." << std::endl; // Output: Key 3 exists.
    }

    // Check if a key exists using count
    if (m.count(3)) {
        std::cout << "Key 3 exists (using count)." << std::endl; // Output: Key 3 exists (using count).
    }

    // Output the size of the map
    std::cout << "Map size: " << m.size() << std::endl; // Output: Map size: 3

    // Check if the map is empty
    if (m.empty()) {
        std::cout << "Map is empty." << std::endl;
    } else {
        std::cout << "Map is not empty." << std::endl; // Output: Map is not empty.
    }

    // Erase an element by key
    m.erase(1);

    // Output the size of the map after erasure
    std::cout << "Map size after erasure: " << m.size() << std::endl; // Output: Map size after erasure: 2

    // Iterate through the map and output elements
    for (const auto& pair : m) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
        // Output: Key: 2, Value: TWO
        // Output: Key: 3, Value: three
    }

    // Example with string keys
    std::map<std::string, int> str_map;

    // Insert elements into the map in random order
    str_map.insert({"banana", 3});
    str_map.insert({"apple", 1});
    str_map.insert({"cherry", 2});

    // Iterate through the map and output elements (sorted by keys in alphabetical order)
    for (const auto& pair : str_map) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
        // Output: Key: apple, Value: 1
        // Output: Key: banana, Value: 3
        // Output: Key: cherry, Value: 2
    }

    return 0;
}

// | Aspect         | Maps                         | Pairs                         |
// |----------------|------------------------------|-------------------------------|
// | Definition     | Associative container        | Simple data structure         |
// | Structure      | Key-value pairs              | Two related values            |
// | Key Uniqueness | Keys must be unique          | No uniqueness constraint      |
// | Sorting        | Sorted by keys (in `std::map`)| No inherent sorting          |
// | Use Case       | Dictionaries, caches         | Grouping related values       |
// | Example        | `std::map<int, std::string>` | `std::pair<int, std::string>` |
