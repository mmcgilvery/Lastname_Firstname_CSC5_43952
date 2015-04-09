/* Matthew McGilvery
 3 - 30 - 15
 Gaddis, Chapter 5, Programming Challenges, #6
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
    unsigned short hrStart= 1, hrEnd; //initial hour of travel, last hour of travel
    float dis = 0, miles, mph;// distance, miles, speed (of car)
    //Output
    cout << fixed << setprecision (2) << showpoint;
    cout << endl;
    cout << "Enter the speed of your vehicle, followed by the enter key." << endl;
    cin >> mph;
    cout << "Enter the amount of hours you traveled, followed by the enter key." << endl;
    cin >> hrEnd;
            
    //Loop
    cout << "Hour                  Miles Voyaged" << endl;
    cout << "------------------------------------" << endl;
    for (hrStart = 1.0 ; hrStart <= hrEnd; hrStart += 1){
        dis = mph * hrStart;
        cout << setw(4) << hrStart << "                   "<< setw(4) << dis << endl;
        cout << "------------------------------------" << endl;
    }
    
    
    //Exit stage right
    return 0;
}



