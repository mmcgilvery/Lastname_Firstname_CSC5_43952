/* Matthew McGilvery
 3 - 25 - 15
 Gaddis, Chapter 4, Programming Challenges, #3
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
    unsigned short num1;
    //Input/Assigned Values
    cout << "We are going to convert a # into a Roman Numeral." << endl;
    cout << endl;
    cout << "Enter a whole number (from 1-10), followed by the enter button." << endl;
    cin >> num1;
    //Output Everything
    if (num1 == 1){
        cout << num1 << " is equal to I." << endl;
    }
    if (num1 == 2){
        cout << num1 << " is equal to II." << endl;
    }
    if (num1 == 3){
        cout << num1 << " is equal to III." << endl;
    }
    if (num1 == 4){
        cout << num1 << " is equal to IV." << endl;
    }
    if (num1 == 5){
        cout << num1 << " is equal to V." << endl;
    }
    if (num1 == 6){
        cout << num1 << " is equal to VI." << endl;
    }
    if (num1 == 7){
        cout << num1 << " is equal to VII." << endl;
    }
    if (num1 == 8){
        cout << num1 << " is equal to VIII." << endl;
    }
    if (num1 == 9){
        cout << num1 << " is equal to IX." << endl;
    }
    if (num1 == 10){
        cout << num1 << " is equal to X." << endl;
    }
    //Exit stage right
    return 0;
}

