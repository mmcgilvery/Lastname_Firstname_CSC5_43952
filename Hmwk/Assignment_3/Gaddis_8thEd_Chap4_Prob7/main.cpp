/* Matthew McGilvery
 3 - 25 - 15
 Gaddis, Chapter 4, Programming Challenges, #7
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    short seconds;
    float secs, minute; // mass of object and weight of object
    //Input/Promptings
    cout << "We are going to calculate time." << endl;
    cout << endl;
    cout << "Enter an amount of seconds, followed by enter/return." << endl;
    cin >> seconds;
    //Output Everything
    cout << fixed << setprecision (2) << showpoint;
    if (seconds >= 60) {
        minute = (seconds/60.0);
        cout << "The total amount of time is "<< static_cast <float> (minute) << "." << endl;  
    }
    else {
        cout << "The total amount of time is " << static_cast <int> (seconds) << " seconds." << endl;  
    }
    //Exit stage right
    return 0;
}



