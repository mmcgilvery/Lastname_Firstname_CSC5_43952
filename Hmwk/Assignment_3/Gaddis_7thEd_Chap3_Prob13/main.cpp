/* Matthew McGilvery
 3 - 20 - 15
 Professor Lehr
 * Gaddis, CH 3, Programming Challenges, #13
 */ 

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    string month;
    unsigned short year;
    unsigned int sales;
    float ttlCash;
    
    //Input/Assigned Values
    cout << "We are going to calculate your business' monthly sales tax."<< endl;
    cout << "Input a month, followed by the enter key."<< endl;
    cin >> month;
    cout << "Input a year, followed by the enter key."<< endl;
    cin >> year;
    cout << "Input total amount collected at the cash register for that month and year, followed by the enter key."<< endl;
    cin >> ttlCash;
    ttlCash *= 1.08;
    
    //Process/Calculate
    sales = ttlCash/1.06;
    //Output
    cout << fixed << setprecision(2) << showpoint;
    cout << "Your product sales for " << month << ", " << year << " are " << static_cast <int> (sales) << "." << endl;
    //Exit stage right
    return 0;
}

