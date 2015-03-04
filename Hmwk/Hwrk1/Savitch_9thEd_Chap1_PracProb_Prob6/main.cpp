/* Matthew McGilvery
 3 - 4 - 15
 #6 from Savitch (Practice Problems); In class completion*/

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants : you  must add const before the variable

//Function Prototypes

//Execution begins here!
int main( )    {
    //Declare Variables
    int lOfFnce, width, height;
    //Request data from user
    cout << "Press return after entering a number." << endl;
    cout << "Enter the width of the fence: " << endl;
    cin >> width;
    cout << "Enter the height of the fence: " << endl;
    cin >> height;
    //Make Calculation
    lOfFnce = width * height;
    //Output data
    cout << "If your fence's width is ";
    cout << width;
    cout << "," << endl;
    cout << "and your fence's height is ";
    cout << height << ","<< endl;
    cout << "then your fence's total length is ";
    cout << lOfFnce << "." << endl;
    cout << "Have a good day!" << endl;
    //Exit Stage left
    return 0;
}