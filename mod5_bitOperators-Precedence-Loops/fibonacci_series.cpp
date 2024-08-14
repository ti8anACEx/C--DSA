#include <iostream>
using namespace std;

int main() {
    cout << "Enter number of Fibonacci sequence numbers you wanna print" << endl;
    int n;
    cin>>n;

    if (n>2) n-=2;
    if (n<=0) n=0;

    cout << "The Fibonacci sequence is " << endl;

    cout << 0 << endl << 1 << endl;

    for(int i=0, j=1; i<=n ; ){

        cout << i + j << endl;
        j = j + i;
        i = j - i;

    }
}

/*

Enter number of Fibonacci sequence numbers you wanna print
10
The Fibonacci sequence is 
0
1
1
2
3
5
8
13
21

*/