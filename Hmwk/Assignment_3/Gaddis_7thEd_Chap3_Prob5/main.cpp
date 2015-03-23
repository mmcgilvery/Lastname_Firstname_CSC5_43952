/* Matthew McGilvery
 3 - 20 - 15
 Professor Lehr
 * Gaddis, CH 3, Programming Challenges, #5
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
    unsigned short bat, hits;
    float average;
    //Input/Assigned Values
    cout << "We are going to calculate your batting average."<< endl;
    cout << "Input the number of times you went up to bat, followed by the enter key."<< endl;
    cin >> bat;
    cout << "Input the amount of times you hit the ball, followed by the enter key"<<  endl;
    cin >> hits;
    
    
    //Process/Calculate
    average = 1.0*hits/bat;
    //Output
    cout << fixed << setprecision(4) << showpoint;
    cout << "Your batting average with "<< hits << " hits, and "<< endl;
    cout << bat << " bating occurrences, your batting average is " << average << "." << endl; 
    //Exit stage right
    return 0;
}

