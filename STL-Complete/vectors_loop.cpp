#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5,6,7};

    // TYPE 0
    for(int x : vec) {
        cout << x << '\t';
    }





    vector<int>::iterator i; // an iterator is like a ptr, not a ptr though, here i, the iterator is of type vector<int>
    // or do "auto i"

    // TYPE 1
    for(i = vec.begin(); i != vec.end(); i++) { // for forward print
        cout << *i << '\t';
    }




    vector<int>::reverse_iterator j; // or auto j, as done here 
    //TYPE 2
    for(auto k = vec.rbegin(); k != vec.rend(); k++) { // for backward print
        cout << *k << '\t'; // Note that k'++' is still used!, since its already a reverse_iterator
    }
    
    //      {1   ,2,3,4,5,6,     7}
    //  |    |                   |    |
    //  |   begin                |   end
    // rend                    rbegin

    return 0;
}