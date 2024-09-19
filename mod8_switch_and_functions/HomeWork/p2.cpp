// Number of specific numbered notes needed for making up the full money

#include<iostream>
using namespace std;


// enum Notes {hundredRupees = 100, fiftyRupees = 50, twentyRupees = 20, tenRupees = 10, oneRupee = 1};

int main(){
// doing with if statements
    // int money = 1374;
    // int blackMoney = money;
    // int hundredRupeesNotes = 0, fiftyRupeesNotes = 0, twentyRupeesNotes = 0, tenRupeesNotes = 0, oneRupeeNotes = 0;

    // if (blackMoney>=100) {
    //     hundredRupeesNotes = blackMoney/100;
    //     blackMoney = blackMoney - 100*hundredRupeesNotes;
    // }
    // if (blackMoney >= 50) {
    //     fiftyRupeesNotes = blackMoney/50;
    //     blackMoney = blackMoney - 50*fiftyRupeesNotes;
    // }
    // if (blackMoney >= 20) {
    //     twentyRupeesNotes = blackMoney/20;
    //     blackMoney = blackMoney - 20*twentyRupeesNotes;
    // }
    // if (blackMoney >= 10) {
    //     tenRupeesNotes = blackMoney/10;
    //     blackMoney = blackMoney - 10*tenRupeesNotes;
    // }
    // if (blackMoney >= 1) {
    //     oneRupeeNotes = blackMoney;
    //     blackMoney = blackMoney - oneRupeeNotes;
    // }

    // cout << "for "<< money << endl;
    // cout << hundredRupeesNotes << '\t' << fiftyRupeesNotes << '\t' << twentyRupeesNotes <<'\t' << tenRupeesNotes << '\t' <<oneRupeeNotes << endl;


// doing with switch statement

    int amount;
    cout<<"Enter the Amount : "<<endl;
    cin>>amount;

    int note = 0;
    switch (1){
        case 1: {
            note = amount/100;
            amount = amount - (100 * note);
            cout<<note<<" Rs.100 note required."<<endl;
        }
        case 2:{
            note = amount/50;
            amount = amount - (50 * note);
            cout<<note<<" Rs.50 note required."<<endl;
        }
        case 3:{
            note = amount/20;
            amount = amount - (20 * note);
            cout<<note<<" Rs.20 note required."<<endl;
        }
        case 4:{
            note = amount/10;
            amount = amount - (10 * note);
            cout<<note<<" Rs.10 note required."<<endl;
        }
        case 5:{
            note = amount/1;
            amount = amount - (1 * note);
            cout<<note<<" Rs.1 note required."<<endl; 
        }
    }
    
    return 0;
}