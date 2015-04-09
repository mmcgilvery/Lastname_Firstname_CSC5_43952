/* Matthew McGilvery
 3 - 30 - 15
 Gaddis, Chapter 5, Programming Challenges, #3
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
    unsigned short yearSt= 1.0, yrEnd = 25.0; //years of ocean level risings
    float levels = 0;// level of ocean
    //Output levels from year 1 to 25
    cout << fixed << setprecision (2) << showpoint;
    cout << "We are going to calculate the increase of the ocean level." << endl;
    cout << endl;
    cout << "Year                  Ocean Level" << endl;
    cout << "------------------------------------" << endl;
    for (yearSt = 1.0 ; yearSt <= yrEnd; yearSt += 1){
        levels += 1.5;
        cout << setw(4) << yearSt << "                   "<< setw(4) << levels << endl;
        cout << "------------------------------------" << endl;
    }
    
    
    //Exit stage right
    return 0;
}



