/* Matthew McGilvery
 3 - 10 - 15
 #3 from Savitch (Programming Projects) Chapter 2, 9th ED;
 In class completion */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants : you  must add const before the variable


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short hr, min, paceMin;
    float paceSec, miles;
    //Request input
    cout << "We are going to compute your pace!"<< endl;
    cout <<"Enter the miles you ran."<< endl;
    cin >> miles;
    cout <<"Enter the hours you ran."<< endl;
    cin >> hr;
    //Process/Calculate
    paceMin = (hr*60) / (miles/hr);
    paceSec = ((3600*hr) / (miles/hr)) - 60*paceMin;
    //Output
    cout << "If you were to run " << miles/hr << "mph, your pace would be: "<< endl;
    cout << static_cast <float> (paceMin) << " Minutes and " << static_cast <float> (paceSec) << " seconds per mile." << endl;
    //Exit stage right
    return 0;
}

