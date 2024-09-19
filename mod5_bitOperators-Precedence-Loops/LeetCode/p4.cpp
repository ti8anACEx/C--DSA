// Q: Complement of Base 10 integer eg 5 is input = 101 = 010 in compliment = 2 at ouput

#include <iostream>
using namespace std;

int main(){
    int original;
    cout << "Enter original number to find its compliment in decimals: " << endl;
    cin >> original; 
    if (original==0){ // EDGE CASE
        cout << "Interger compliment of "<< original <<" is "<< 1 <<endl;
        return 1;
    } 
    int temp = original;


    int total_Bdigit_counts = 0;

    while (temp!=0){
        total_Bdigit_counts++;
        temp = temp >> 1;
    }

    int result = (1<<total_Bdigit_counts) -1; 
    // ie 1 << 3 means 10 << 2 means 100 << 1 means 1000!!
    // for 5, total_Bdigits=3. So,(1000) or 8 - 1 = 7 (111 in binary)   

    // temp = original;
    // Another method---

    // int mask = 0;
    // while(temp!=0){
    //     mask = (mask << 1) | 1;
    //     temp = temp >> 1;
    // }

    cout << "Interger compliment of "<< original <<" is "<< (original ^ result)<<endl;
    cout << "Interger compliment of "<< original <<" is "<< (~original & result)<<endl;
    // cout << "Interger compliment of "<< original <<" is "<< (~original & mask)<<endl;


}