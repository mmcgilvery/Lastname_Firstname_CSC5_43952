/*
 Matthew McGilvery
 3-20-15
 Professor Mark Lehr
 Gaddis, 8th Ed, Ch 3, Programming Challenges, #2
*/
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, const char * argv[]) {
    //Declare Variables
    short miles;
    float gallons, mpg;
    //Request Data
    cout << "Hello. We are going to calculate your MPG!" << endl;
    cout << "Please enter the amount of miles you can drive on a full tank." << endl;
    cin >> miles;
    cout << "Please enter the amount of gallons of gas your car can hold." << endl;
    cin >> gallons;
    //Calculate
    mpg = miles/gallons;
    //Output data
    cout << setprecision (4) << showpoint << "Your mpg is "<< mpg << " miles per gallon."<< endl;
    return 0;
}