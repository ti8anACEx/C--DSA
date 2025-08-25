#include <iostream> 
#include <list>

using namespace std;

int main() {
    list<int> l = {1,2,3,4,5,6,7};

    l.push_back(67);
    l.push_back(69);

    l.push_front(11); // new functions !! as list is actually a doubly linked list
    l.push_front(101);

    l.pop_back();

    l.pop_front();

    // other functions available are:
    // size, erase, clear, begin, end, rbegin, rend, insert, front, back

    return 0;
}

// DIFFERENCES BETWEEN VECTORS AND LISTS

// | Feature                | STL Vector                                           | STL List                                               |
// |------------------------|------------------------------------------------------|--------------------------------------------------------|
// | Underlying Data Structure | Dynamic array                                        | Doubly linked list                                     |
// | Memory Allocation      | Contiguous block of memory                           | Non-contiguous memory (nodes linked together)          |
// | Access Time            | Fast random access (O(1))                            | Slow random access (O(n))                              |
// | Insertion/Deletion     | Expensive (O(n) for inserting/deleting in the middle) | Efficient (O(1) for inserting/deleting at known positions) |
// | Memory Overhead        | Low                                                  | Higher due to storage of pointers                      |
// | Iteration              | Faster iteration due to cache locality               | Slower iteration due to non-contiguous memory          |
// | Dynamic Resizing       | Automatic resizing (can involve reallocations)       | No need for resizing (nodes are dynamically allocated) |
// | Suitable For           | Applications requiring fast access to elements       | Applications requiring frequent insertions and deletions|
