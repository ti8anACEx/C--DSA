#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 6;
    //    100    110

    cout<< (a&b) <<endl;
    cout<< (a|b) <<endl;
    cout<< (a^b) <<endl;
    cout<<~b<<endl;


    return 0;
}

/*
gives

4
6
2
-7
*/