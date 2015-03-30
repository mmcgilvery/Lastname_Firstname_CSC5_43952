/* Matthew McGilvery
 3 - 25 - 15
 Gaddis, Chapter 4, Programming Challenges, #6
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
    float mass, weight; // mass of object and weight of object
    //Input/Promptings
    cout << "We are going to calculate the weight of a objects." << endl;
    cout << endl;
    cout << "Enter the mass of an object, followed by enter." << endl;
    cin >> mass;
    //Calculate 
    weight = 9.8 * mass;
    //Output Everything
    cout << fixed << setprecision (2) << showpoint;
    cout << "The weight of the object is: " << weight << "." << endl;
    if (weight <= 10) {
      cout << "With a weight of "<< static_cast <float> (weight) << ", the object is too light."<< endl;   
    }
    if (weight >= 1000) {
      cout << "With a weight of "<< static_cast <float> (weight) << ", the object is too heavy."<< endl;   
    }
    
    //Exit stage right
    return 0;
}



