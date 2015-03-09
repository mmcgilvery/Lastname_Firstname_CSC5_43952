/* Matthew McGilvery
 3 - 9 - 15
 #13 from Savitch (Programming Projects) Chapter 2, 9th ED;
 In class completion */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants

//Function Prototypes

//Execution begins here!
int main( )    {
    //Declare variables
    unsigned short lbs, hghtIn, ageInYr;
    char mf;
    unsigned char calCndy = 230;
    float BMRFem, BMRMale, nCandy;
    //Request input from user
    cout << "How many candy bars can you consume whilst maintaining your weight?"<< endl;
    cout << "We're about to find out!"<< endl;
    cout << "Please enter your weight in pounds and press enter/return.";
    cout << " Note: Please use integers!" << endl;
    cin >> lbs;
    cout << "Please enter your height in inches and press enter/return." << endl;
    cin >> hghtIn;
    cout << "Please enter your age in years and press enter/return." << endl;
    cin >> ageInYr;
    cout << "Are you male(m) or female(f)? Note: Use m or f"<< endl;
    cin >> mf;
    //Calculate
    BMRFem = 655+4.3*lbs+4.7*hghtIn - 4.7*ageInYr ;
    BMRMale = 66 + 6.3*lbs + 12.9*hghtIn - 6.8*ageInYr ;
    //        Question    if Male           if Female
    nCandy = ((mf=='m')?(BMRMale/calCndy): (BMRFem/calCndy));
    //Output the results
    cout << "Your weight = " << lbs << "(lbs)" << endl;
    cout << "Your height = " << hghtIn << "(inches)" << endl;
    cout << "Your age = " << ageInYr << "(years)" << endl;
    cout << "Your sex = " <<((mf=='m')?"Male" : "Female" )<< endl;
    cout << "You can eat " << nCandy << " candy bars per/day"<< endl;
    //Exit stage right
    
    return 0;
}
