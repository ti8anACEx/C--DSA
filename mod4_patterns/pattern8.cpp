#include<iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter number of n: " << endl;
    cin>>n;

    char ch = 'A';

    for (int i = 1; i <= n; i++, ch='A'){
        for (int j = 1; j <= n; j++, ch++){
            cout << ch << '\t';
        }
        cout  << endl;
    }

    // OR USE 

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            char c = 'A' + j - 1; // stored char c for typecasting back to char 
            cout << c << '\t';
        }
        cout  << endl;
    }

    // OR USE (BEST) only one loop, bbut  ultimately time complexity is same for all (n*n), but easier to understand

    char x = 'A';
    for (int i = 0; i < n*n; i++){
        if(i%n ==0){
            cout<<endl;
            x = 'A';
        }
        cout<<x++<<'\t';
    }
}

/*
for n = 5


A       B       C       D       E
A       B       C       D       E
A       B       C       D       E
A       B       C       D       E
A       B       C       D       E
*/