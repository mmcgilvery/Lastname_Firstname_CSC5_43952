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
    cout << "Enter rate of pay" << endl;
    cin >> payRate;
    //Prompt user for hrsWrkd 
    cout << "Enter amount of hours worked" << endl;
    cin >> hrsWrkd;
    //Calculate total pay
    payChk = payRate * hrsWrkd;
    cout << "Your total pay is $" << payChk << endl;
    
    
    
    
    //Exit stage right
    
return 0;
}
