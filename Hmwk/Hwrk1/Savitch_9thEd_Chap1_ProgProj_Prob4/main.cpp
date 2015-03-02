/* 
 Matthew McGilvery
 3-2-15
 Lab (Free Fall Problem from Savitch)
 Professor Lehr */
 



//System libraries

#include <iostream> //Input/Output library: the library that contains cout, cin, and others
using namespace std; //Standard namespace for the I/O stream library; tells the computer that you won't be using anything in the input/output library that matches it

//User Libraries


//Global Constants : you  must add const before the variable
const float G= 3.2174e1f; //Acceleration in feet / seconds^2
const float CNVFTMT = 3.048e-1f; //Conversion from feet into meters

//Function Prototypes

//Execution begins here!
int main (int argc, char** argv) {
    //Declare Variables
    float time, dstnce;
    //Prompt for time
    cout << "Free Fall Problem" << endl;
    cout << "Input the time x.xx (seconds)" << endl;
    cin >> time;
    //Calculate the distance
    // 1) If you use a decimal, place f direcly next to the calculation.
    // 2) If you don't, use static_cast<float> before the calulation; make sure to place a "()" in front of the first number.
    // 3) If you use e, with no decimal points remaining, then you don't have to put an f(tells computer to use float rather than double.
    //dstnce = static_cast<float> (1)/2*G*time*time;
    dstnce = 5e-1*G*time*time;
    cout << "Distance fallen = "<< dstnce << " (feet)" << endl;
    cout << "Distance fallen = "<< dstnce*CNVFTMT << " (meters)" << endl;
    
    return 0;
}


