/*
 Author: Matthew McGilvery
 Purpose: Input/Output process and flowchart.
 */
//System libraries

#include <iostream> //Input/Output library: the library that contains cout, cin, and others
using namespace std; //Standard namespace for the I/O stream library;

//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main (int argc, char** argv) {
    float HghtM, Bmi;
    int LbInKg;
    cout << "Enter your weight in kilograms AS A WHOLE NUMBER!" << endl;
    cin >> LbInKg;
    cout << "Enter your height in meters IN DECIMAL FORM!" << endl;
    cin >> HghtM;
    Bmi = LbInKg/HghtM * 1/HghtM;
    cout << "Your total Bmi is ";
    cout << Bmi << endl;
    return 0;
}