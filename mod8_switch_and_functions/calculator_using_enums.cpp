// calculator using enums

#include <iostream>
using namespace std;

enum Operartion{Addition = 1, Subtraction = 2, Multiplication = 3, Division = 4, Modulo = 5};


int main(){
    int a, b;
    cout<<"Enter a and b (!=0) : "<<endl;
    cin>>a>>b;

    int op;
    cin>>op; //  c++ cannot do directly something like Operartion opp = Operartion.Multiplication;
    
    switch(op){
        case Addition:
            cout << a+b<<endl;
            break;
        
        case Subtraction:
            cout << a-b << endl;
            break;

        case Multiplication:
            cout << a*b <<endl;
            break;

        case Division:
            cout << a/b<<endl;
            break;
        
        case Modulo:
            cout << a%b<<endl;
            break;

        default:
            cout << "Unknown Operation" << endl;
    }



    return 0;
}