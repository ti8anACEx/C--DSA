// COMPARATORS ARE THE FUNCTIONs OR FUNCTORS THAT RETURN BOOLEAN VALUE BASED ON COMPARASION OF TWO SAME GENERIC TYPE VALUES 
#include <iostream>
using namespace std;

/**
 * This is a Function Comparator
 * compares pairs based on second element of the pair
 * if second elements are equal, it checks between the first
 * Sorts in ASCENDING ORDER
 * ```
 * SEE MORE ON functors_comparators_and_types.cpp
 * ```
 */
bool myCustomComparatorAsFunction(pair<int, int> p1, pair<int,int> p2) {
    if (p1.second < p2.second) return true; 
    if (p1.second > p2.second) return true; 
    // else if any one does not happen, means both second are equal:
    if (p1.first < p2.first) return true; 
    else return false;
}

// SEE MORE ON functors_comparators_and_types.cpp!!!