/* Matthew McGilvery
 3 - 27 - 15
 Gaddis, Chapter 4, Programming Challenges, #9
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short p, n, d, q;
    unsigned int total;
    //Input/Assigned Values
    cout << "We are going to calculate whether or not your input is equal to a dollar." << endl;
    cout << endl;
    cout << "Enter a number of pennies, followed by the enter key." << endl;
    cin >> p;
    cout << "Enter a number of nickels, followed by the enter key." << endl;
    cin >> n;
    cout << "Enter a number of dimes, followed by the enter key." << endl;
    cin >> d;
    cout << "Enter a number of quarters, followed by the enter key." << endl;
    cin >> q;
    
    total = p + 5*n + 10*d + 25*q;
    
    //Output Everything
    if (total == 100){
        cout << "CONGRATULATIONS. YOU HAVE ENTERED A DOLLAR!" << endl;
    }
    if (total <= 100){
        cout << "The amount you entered, " << total <<"¢, is lower than a dollar." << endl;
    }
    if (total >= 100){
        cout << "The amount you entered, " << total <<"¢, is more than a dollar." << endl;
    }
    else {
        cout << "Error." << endl;
    }
    //Exit stage right
    return 0;
}

