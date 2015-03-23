/*
 Matthew McGilvery
 3-17-15
 Professor Mark Lehr
 Savitch, 9th Ed, Ch 3, Practice Problems #6
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float pi = 3.14159;
//Function Prototypes

//Execution begins here

int main(int argc, const char * argv[]) {
    //Declare Variables
    float forceB, radius, volOfO , lbOfSph, lbOfFlu = 62.4; //buoyant force, radius of sphere, volume of sphere, weight of sphere, weight of liquid in which the sphere is submerged
    //Request info
    cout << "Calculating the buoyant force of a submerged sphere" << endl;
    cout << "and whether the sphere will float or sink." << endl;
    cout << endl;
    cout << "Please enter the weight of the submerge sphere in pounds, followed by the enter key." << endl;
    cin >> lbOfSph;
    cout << "Please enter the radius of the submerge sphere in feet, followed by the enter key." << endl;
    cin >> radius;
    //Calculate output
    volOfO= (4/3)*pi*(radius*radius*radius);
    forceB = volOfO * lbOfFlu; 
    cout << "With a force of "<< static_cast <float> (forceB) <<" foot pounds,";
    if (forceB >= lbOfSph)
    {
        cout << " your sphere will float." << endl;
    }
    else {
        cout << " your sphere will float." << endl;
    }
    return 0;
}