#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Functor class for addition
class Add {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};

// Comparator 'function' for ascending order
bool compareAscending(int a, int b) {
    return a < b;
}

// Comparator 'functor' for descending order
class CompareDescending {
public:
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    // Using the functor
    Add add;
    int result = add(3, 4);
    cout << "Sum using functor: " << result << endl; // Output: 7

    vector<int> vec = {5, 3, 8, 1};

    // Using the comparator function for ascending order
    sort(vec.begin(), vec.end(), compareAscending);
    cout << "Sorted in ascending order using comparator function: ";
    for (int num : vec) {
        cout << num << " "; // Output: 1 3 5 8
    }
    cout << endl;

    // Using the comparator functor for descending order
    sort(vec.begin(), vec.end(), CompareDescending());
    cout << "Sorted in descending order using comparator functor: ";
    for (int num : vec) {
        cout << num << " "; // Output: 8 5 3 1
    }
    cout << endl;

    return 0;
}
/**
Explanation:
    Functor:

        Class Definition: Add class that overloads the operator().

        Usage: An instance of Add is created and used to add two integers.

    Comparator as Standalone Function:

        Function Definition: compareAscending function that compares two integers and returns true if the first is less than the second.

        Usage: The function is passed to sort to sort a vector in ascending order.

    Comparator as Functor:

        Class Definition: CompareDescending class that overloads the operator().

        Usage: An instance of CompareDescending is passed to sort to sort a vector in descending order.
*/