// break an infinite loop containing switch statement inside it without using break in while's own scope (can use in switch)

#include<iostream>
using namespace std;

int main(){
    int x = 3*4-1;
    string word = "hello";

    while(1){ // use return or exit...
        switch(x){
            case 1:
                cout << 1 << endl;
                break;
            
            case 2:
                cout << 2 << endl;
                break;

            case 11:
                cout << 11 << endl;
                exit(0); //will exit the program or return 0; to exit current fn
                break;

            default:
                cout << "no value" << endl;
        }
    }

    cout << "hello, final line is being executed" << endl;

    return 0;
}