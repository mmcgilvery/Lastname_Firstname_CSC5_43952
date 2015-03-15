/* Matthew McGilvery
 3 - 10 - 15
 #2 from Savitch (Programming Projects) Chapter 2, 9th ED;
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
    float guess, r, guessOk;
    unsigned short n;
    //Request input
    cout << "We are great calculating square root of a number."<< endl;
    cout <<"Enter the number, whose square root you'd like to calculate."<< endl;
    cin >> n;
    cout << "Guess at the square root of the number (in decimal form)." << endl;
    cin >> guess;
    //Process/Calculate + Repeat
    for(float i=0; i<100; i++) {
    r = n / guess;
    guessOk = (guess + r) / 2; }
    //Output
    cout << static_cast<float>(guessOk) <<" is closest to the square root of "<< n << ", using your initial guess of "<< guess << "."<< endl;
    //Exit stage right
    return 0;
}

