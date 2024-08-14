// Q: Complement of Base 10 integer eg 5 is input = 101 = 010 in compliment = 2 at ouput

#include <iostream>
using namespace std;

int main(){
    int original;
    cout << "Enter original number to find its compliment in decimals: " << endl;
    cin >> original;
    int temp = original;


    int total_Bdigit_counts = 0;

    while (temp!=0){
        total_Bdigit_counts++;
        temp = temp >> 1;
    }

    int result = (1<<total_Bdigit_counts) -1;    

    cout << "Interger compliment of "<< original <<" is "<< (original ^ result);
}