#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

/**
 * a comprehensive C++ program that demonstrates the usage of reverse, next_permutation, 
 * previous_permutation, swap, min, max, max_element, min_element, binary_search, and 
 * the built-in functions for counting set bits (__builtin_popcount, __builtin_popcountl, __builtin_popcountll).
 */

// This program demonstrates the usage of various STL algorithms and built-in functions.

int main() {
    // Demonstrate reverse
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Original vector: ";
    for (const auto& v : vec) cout << v << " "; // Output: 1 2 3 4 5
    cout << endl;

    reverse(vec.begin(), vec.end());
    cout << "Reversed vector: ";
    for (const auto& v : vec) cout << v << " "; // Output: 5 4 3 2 1
    cout << endl;

    // Demonstrate next_permutation with a vector
    vector<int> perm_vec = {1, 2, 3};
    cout << "Original permutation: ";
    for (const auto& v : perm_vec) cout << v << " "; // Output: 1 2 3
    cout << endl;

    next_permutation(perm_vec.begin(), perm_vec.end());
    cout << "Next permutation: ";
    for (const auto& v : perm_vec) cout << v << " "; // Output: 1 3 2
    cout << endl;

    // Demonstrate next_permutation with a string
    string str = "abc";
    cout << "Original string: " << str << endl; // Output: abc

    next_permutation(str.begin(), str.end());
    cout << "Next permutation of string: " << str << endl; // Output: acb

    // Demonstrate prev_permutation with a string
    prev_permutation(str.begin(), str.end());
    cout << "Previous permutation of string: " << str << endl; // Output: abc

    // Demonstrate swap
    int a = 10, b = 20;
    cout << "Original a: " << a << ", b: " << b << endl; // Output: Original a: 10, b: 20
    swap(a, b);
    cout << "Swapped a: " << a << ", b: " << b << endl; // Output: Swapped a: 20, b: 10

    // Demonstrate min and max
    int x = 42, y = 30;
    int min_val = min(x, y);
    int max_val = max(x, y);
    cout << "Min value: " << min_val << endl; // Output: Min value: 30
    cout << "Max value: " << max_val << endl; // Output: Max value: 42

    // Demonstrate max_element and min_element
    vector<int> elements = {5, 2, 9, 1, 5, 6};
    auto max_elem = max_element(elements.begin(), elements.end());
    auto min_elem = min_element(elements.begin(), elements.end());
    cout << "Max element: " << *max_elem << endl; // Output: Max element: 9
    cout << "Min element: " << *min_elem << endl; // Output: Min element: 1

    // Demonstrate binary_search
    sort(elements.begin(), elements.end());
    bool found = binary_search(elements.begin(), elements.end(), 5);
    cout << "Element 5 found: " << (found ? "Yes" : "No") << endl; // Output: Yes

    // Demonstrate built-in functions for counting set bits
    unsigned int num = 29; // Binary: 11101
    cout << "Number of set bits in " << num << ": " << __builtin_popcount(num) << endl; // Output: 4
    unsigned long long_num = 123456789; // Binary: 111010110111100110100010101
    cout << "Number of set bits in " << long_num << ": " << __builtin_popcountl(long_num) << endl; // Output: 16
    unsigned long long ll_num = 9876543210123456789ULL; // Large number
    cout << "Number of set bits in " << ll_num << ": " << __builtin_popcountll(ll_num) << endl; // Output: 29

    return 0;
}
