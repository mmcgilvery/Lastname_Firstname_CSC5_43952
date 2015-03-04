/* Matthew McGilvery
 3 - 4 - 15
 Homework from Gaddis; In class completion*/

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants : you  must add const before the variable


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short nCust, nEDrnks, nCDrnks;
    unsigned char pEDrnks, pCDrnks;
    //Input/Assigned Values
    nCust = 16500;// Number of Customers
    pEDrnks = 15;// Percentage out of energy drinkers
    pCDrnks = 58;//Percentage out of citrus drinkers
    //Process/Calculate
    nEDrnks= nCust/static_cast<float>(.15)*pEDrnks+.5;
    nCDrnks= nEDrnks/static_cast<float>(.58)*pCDrnks+.5;
    //Output Everything
    cout << "Customer Survey Problem " << endl;
    cout << "Known/Given Values: " << endl;
    cout << "Number of customers " << nCust << endl;
    cout << "Percentage Energy Drinkers = " << static_cast<int>(pEDrnks)<< " %" << endl;
    cout << "Percentage Citrus Drinkers = " << static_cast<int>(pCDrnks)<< " %" << endl;
    cout << "Calcuated Values:" << endl;
    cout << "Number of energy drinkers " << nEDrnks << endl;
    cout << "Number of citurs drinkers " << nCDrnks << endl;
    //Exit stage right
    return 0;
}

