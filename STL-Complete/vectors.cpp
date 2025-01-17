#include <iostream>
#include <vector>

using namespace std;

int main() {
    // NOTE: VECTORS GROW IN 2^noOfElements, size expands only when capacity is exceeded!!

    vector<int> vec;
    // vector<int> vec = { 4,5,6,7,8,9 }; // NOTE: This doesnot increase capacity by 2^n!!!
    // vector<int> vec( 50, 2 ); // (length/size, valueToBeRepeated)
    vector<int> vec2(vec);

    vec.push_back(34); // NOTE: push_back/insert/other runtime fns increase capacity by 2^n when capacity exceeds
    vec.push_back(58);
    vec.push_back(28);
    vec.push_back(19);
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(67);
    vec.push_back(13);

    vec.emplace_back(13); // same like push_back, but underlying differences will be explained later

    vec.pop_back();
    vec.pop_back();
    
    cout << vec.size() << endl;
    cout << vec.capacity() << endl; // the capacity doesnot reduce once increased in any case (not even with pop_back, erase, clear)

    cout<<endl;

    cout << *(vec.begin()+5); // is same as *(arr+5)
    cout << *(vec.end()); // IMP!!: vec.end points to n+1 elements, ie, a garbage value/0. Points to next memory location after the last element.
    // for last element use *(vec.end() - 1) 

    // TWO MORE ITERATORS ARE THERE : rbegin and rend (reverseBegin and reverseEnd), check vectors_loop.cpp file for info

    vec.erase(vec.begin()); // can't provide direct index, coz the argument must be an iterator
    // in this case, vec.begin(), which points to first element, that will be removed now
    vec.erase(vec.begin()+2); // deletes the element at index 2. So, vec.begin() is an iterator, not a ptr, but acts like it

    vec.erase(vec.begin()+1, vec.begin() + 4); // deletes elements at indexes ranging [1, 4), ie,. [1,3] 


    for (int i : vec){
        cout << i << '\t';
    }

    cout<<endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    
    vec.insert(vec.begin()+2, 69); // [1,2,3,4,5] becomes [1,2,69,3,4,5]

    vec.clear(); //clears all elements, but capacity doesnot reduce
    vec.empty(); // isEmpty boolean? 1 : 0

    // ERASE AND INSERT ARE COSTLY FNS OF O(n), others are O(1)

    return 0;
}