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
    //Declare Variables
    int payRate, hrsWrkd, payChk;
    //Prompt user for payRate
    cout <<"Enter rate of pay in the following format x.xx"<< endl;
    cin >> payRate;
    //Prompt user for hrsWrkd 
    cout << "Enter total hours worked using the xxx.xx format"<< endl;
    cin >> hrsWrkd;
    payChk = payRate * hrsWrkd;
    cout << "If you work "; 
    cout << hrsWrkd; 
    cout << "...and have a rate of pay of  ";
    cout << payRate;
    cout << " per hour, then your total pay will be ";
    cout << payChk;
            
    
    
    //Exit stage right
    
return 0;
}
