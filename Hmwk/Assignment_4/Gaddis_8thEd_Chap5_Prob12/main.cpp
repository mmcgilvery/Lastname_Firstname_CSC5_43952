/* Matthew McGilvery
 3 - 30 - 15
 Gaddis, Chapter 5, Programming Challenges, #12
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
    float celsius, fahr;//Celsius, Fahrenheit
    //Input
    cout << fixed << setprecision (2) << showpoint;
    cout << "We are going to calculate temperature in Fahrenheit." << endl;
    cout << endl;
    
    //Output and Loop
    cout << "Celsius                  Fahrenheit" << endl;
    cout << "------------------------------------" << endl;
    fahr = celsius * (9/5) + 32 ; //Calculate
    cout << setw(4) << "0" << "                   "<< setw(2) << "32" << endl;
    cout << "------------------------------------" << endl;
    for (celsius = 1.0 ; celsius < 10; celsius += 1){
        fahr = celsius * (9/5) + 32 ; //Calculate
        cout << setw(4) << celsius << "                   "<< setw(4) << static_cast <float> (fahr) << endl;
        cout << "------------------------------------" << endl;
    }
    for (celsius = 10.0 ; celsius <= 20; celsius += 1){
    fahr = celsius * (9/5) + 32 ; //Calculate
    cout << setw(4) << celsius << "                  "<< setw(3) << static_cast <float> (fahr) << endl;
    cout << "------------------------------------" << endl;
}


    //Exit stage right
    return 0;
}



