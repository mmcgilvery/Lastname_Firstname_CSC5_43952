/* Matthew McGilvery
4 - 21 - 15
 Gaddis, Chapter 6, Programming Challenges, #5
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float seconds (int, float);
//Execution Begins Here
int main(int argc, char** argv) {
    int t; // seconds 
    float g, d;// distance
    cout << "We are going to calculate the distance fallen of an object."<< endl;
    cout << endl;
    //Output
    d = seconds(t,g);
   cout << "The object has been falling for " << static_cast <float> (d) << " meters." << endl;
   return 0;
}

//Input and separate function for solving for distance
float seconds (int t, float g){
    float d;
    cout << "Enter the seconds the object has been falling, followed by the enter key."<< endl;
    cin >> t;
    g = 9.81f;
    d = .5*g*(t*t);
    if (t < 0){
        cout << "Error" << endl;
        return 0;
    }
    return d;
} 