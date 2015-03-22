/*
 Matthew McGilvery
 3-17-15
 Professor Mark Lehr
 Savitch, 9th Ed, Ch 3, Practice Problems #2
 */

#include <iostream>
#include <iomanip>

using namespace std;
//Global Constants
//Function Prototypes
//Execution begins here

int main(int argc, char** argv) {
//Declare variables
    float intrst, amntDue, minPay, acc;
    //Request input
    cout << "We are going to calculate interest due, total amount due, and the minimum payment ";
    cout << "for your revolving credit account.";
    cout << endl;
    cout << "Please enter your current account balance, followed by enter/return." << endl;
    cin >> acc;
    cout << fixed << setprecision(2)<<showpoint;
    if (acc <= 1000){
        intrst = 1.5e-2;
        amntDue = (intrst + 1)*acc;
        cout << "You owe " << amntDue << "." << endl;
    }
    else {
        intrst = 1e-2;
        amntDue = (intrst + 1)*acc;
        cout << "You owe " << amntDue<< "." << endl;
        cout << endl;
    }
    if (amntDue <= 100) {
        minPay = 10;
        cout << "Your minimum payment is "<< minPay << "." << endl;     
    }
    else {
        minPay = 1e-1*amntDue;
   
        cout << "Your minimum payment is " << minPay << "." << endl;
    }
    return 0;
}

