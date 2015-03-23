/* Matthew McGilvery
 3 - 20 - 15
 Professor Lehr
 * Gaddis, CH 3, Programming Challenges, #6
 */ 

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float rplcCos, minIns;
    //Input/Assigned Values
    cout << "We are going to calculate the minimum amount insurance you should get for your property."<< endl;
    cout << "Input the replacement cost of your property."<< endl;
    cin >> rplcCos;
    
    
    //Process/Calculate
    minIns = 8e-1 * rplcCos;
    //Output Everything
    cout << "The minimum amount of insurance you should get is $" << minIns; 
    cout << " if your property's replacement cost is $"<< rplcCos << "."<< endl;
    //Exit stage right
    return 0;
}

