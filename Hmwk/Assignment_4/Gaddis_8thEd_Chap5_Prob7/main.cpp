/* Matthew McGilvery
 3 - 30 - 15
 Gaddis, Chapter 5, Programming Challenges, #7
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
    unsigned short daySt= 1, dayEnd; //years of ocean level risings
    float money = 1e-2;// level of ocean
    //Output levels from year 1 to 25
    cout << fixed << setprecision (2) << showpoint;
    cout << "We are going to calculate your incremental penny earnings." << endl;
    cout << endl;
    cout << "Enter the amount of days for which you'd like to calculate change, followed by the enter key." << endl;
    cin >> dayEnd;
            
            
    cout << "Days                  Money Accrued" << endl;
    cout << "------------------------------------" << endl;
    if (daySt == 1.0){
            money = .01;
            cout << setw(4) << daySt << "                   "<< setw(4) << money << endl;
            cout << "------------------------------------" << endl;
        }
    for (daySt = 2.0 ; daySt <= dayEnd; daySt += 1){
        money *= 2;
        cout << setw(4) << daySt << "                   "<< setw(4) << money << endl;
        cout << "------------------------------------" << endl;
    }
    
    
    //Exit stage right
    return 0;
}



