/* Matthew McGilvery
 3 - 30 - 15
 Gaddis, Chapter 5, Programming Challenges, #1
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
    unsigned int minNum = 1, maxNum, sum; //minimum number, number inputed by user, sum
    //Input/Promptings
    cout << "We are going to calculate the sum from 1 to a # of your choice." << endl;
    cout << endl;
    cout << "Enter a number, followed by enter. (Use whole numbers)" << endl;
    cin >> maxNum;
    //Calculate + Output
    for (minNum = 1 ; minNum <= maxNum; minNum++){
        sum += minNum;
    }
    //Output Everything
    cout << "The sum of numbers 1 to "<< maxNum << " is " << sum << "."<< endl;
    
    
    
    
    //Exit stage right
    return 0;
}



