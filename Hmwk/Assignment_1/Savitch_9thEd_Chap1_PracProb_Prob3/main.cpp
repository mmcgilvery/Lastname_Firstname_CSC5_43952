/* Matthew McGilvery
 3 - 4 - 15
 #3 from Savitch (Practice Problems); In class completion*/

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants : you  must add const before the variable

//Function Prototypes

//Execution begins here!
int main( )    {
    //Declare Variables
    int numOfPd, pPerPd, ttlPd;
    //Greet user
    cout << "Hello!" << endl;
    //Request data from user
    cout << "Press return after entering a number." << endl;
    cout << "Enter the number of pods: " << endl;;
    cin >> numOfPd;
    cout << "Enter the number of peas in a pod: " << endl;
    cin >> pPerPd;
    //Make Calculation
    ttlPd = numOfPd / pPerPd;
    //Output data
    cout << "If you have ";
    cout << numOfPd;
    cout << " pea pods" << endl;
    cout << "and ";
    cout << pPerPd;
    cout << " peas in each pod, then"<< endl;
    cout << "you have ";
    cout << ttlPd;
    cout << " peas in all the pods." <<endl;
    //Say good-bye to user
    cout << "Good-bye!" << endl;
    //Exit Stage left
    return 0;
}