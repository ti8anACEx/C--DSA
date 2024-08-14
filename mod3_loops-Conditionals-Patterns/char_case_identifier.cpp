#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<< "Enter a character";
    cin >> ch;

    // CAN SIMPLY DO THIS
    
    // if(ch>'a'&& ch<='z'){
    //     cout<<"Lower case character entered"<<endl;
    // }else if(ch>='A'&& ch<='Z'){
    //     cout<<"Upper case character entered"<<endl;
    // }

    int n = ch;

    int a = 'a', z = 'z', A ='A', Z = 'Z', zero = '0',nine = '9';

    if ((n>=a && n<=z) || (n>=z && n<=a)){ // || (OR) is bcoz, i dont know which char is mapped to which number exactly. a or b anything can be greater

        cout<<"Lower case character entered"<<endl;

    }else if((n>=A && n<=Z) || (n>=Z && n<=A)){

        cout<<"Upper case character entered"<<endl;

    } else {

        cout<<"NumericalV character entered"<<endl;

    }


    return 0;
}