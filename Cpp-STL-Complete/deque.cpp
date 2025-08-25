#include <iostream>
#include <deque>

using namespace std;

int main () {
    deque<int> d = {1,2,3}; // a double ended queue, has all fns of list stl
    // LMAO ;) deque is a data structure while dequeue means pop operation from such DS 

    return 0;
}

// | Feature                  | STL List                                             | STL Deque                                         |
// |--------------------------|------------------------------------------------------|--------------------------------------------------|
// | Underlying Data Structure | Doubly linked list                                   | Double-ended queue (deque) implemented via dynamic arrays|
// | Memory Allocation        | Non-contiguous memory (nodes linked together)        | Contiguous blocks of memory                      |
// | Access Time              | Slow random access (O(n))                            | Fast random access (O(1)) for elements in blocks |
// | Insertion/Deletion       | Efficient (O(1) at known positions)                  | Efficient (O(1) at both ends)                    |
// | Memory Overhead          | Higher due to storage of pointers                    | Lower compared to list (but still more than vector) |
// | Iteration                | Slower iteration due to non-contiguous memory        | Faster iteration compared to list                |
// | Dynamic Resizing         | Not needed (nodes are dynamically allocated)         | Automatic resizing (efficient handling of both ends) |
// | Suitable For             | Frequent insertions/deletions                        | Frequent additions/removals at both ends         |
