/* Matthew McGilvery
 4 - 21 - 15
 Gaddis, Chapter 6, Programming Challenges, #6
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float kE(float);
//Execution Begins Here
int main(int argc, char** argv) {
    float kE2, m, v;//Kinetic Energy, Mass, velocity
    //Output
    cout << kE(kE2) << " kg * (m^2/s^2)                          "<< m << " kg             "<< v << " m/s" << endl;
    return 0;
}

//Input
float kE (float kE2){
    float m, v;
    cout << "Enter the mass(in kilograms) of an object, followed by the enter key."<< endl;
    cin >> m;
    cout << "Enter the velocity(in meters per second) of an object, followed by the enter key."<< endl;
    cin >> v;
    //Output
    kE2 = 0.5f * m * pow(v, 2);
    cout << "Kinetic Energy             Mass            Velocity" << endl;
    return kE2;
}