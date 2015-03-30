/* Matthew McGilvery
 3 - 27 - 15
 Gaddis, Chapter 4, Programming Challenges, #12
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
    unsigned int softwr;
    float total;
    //Input/Assigned Values
    cout << "We are going to calculate your purchase." << endl;
    cout << endl;
    cout << "Enter a number of software packages you plan to purchase, followed by the enter key." << endl;
    cin >> softwr;
    //Output Everything
    cout << fixed << setprecision (2) << showpoint << endl;
    if (softwr >= 10 && softwr <= 19){
        total = 99.00 * softwr * 8e-1;
        cout << "The total for your purchase will include a 20% discount," << endl;
        cout << "resulting in a total price of $" << static_cast <float> (total) << endl;
    }
    if (softwr >= 20 && softwr <= 49){
        total = 99.00 * softwr * 3e-1; 
        cout << "The total for your purchase will include a 30% discount," << endl;
        cout << "resulting in a total price of $" << static_cast <float> (total) << endl;

    }
    if (softwr >= 50 && softwr <= 99){
        total = 99.00 * softwr * 4e-1; 
        cout << "The total for your purchase will include a 40% discount," << endl;
        cout << "resulting in a total price of $" << static_cast <float> (total) << endl;

    }
    if (softwr >= 100) {
        total = 99.00 * softwr * 5e-1;
        cout << "The total for your purchase will include a 50% discount," << endl;
        cout << "resulting in a total price of $" << static_cast <float> (total) << endl;

    }
    else if (softwr < 10) {
        cout << "Error." << endl;
    }
    //Exit stage right
    return 0;
}

