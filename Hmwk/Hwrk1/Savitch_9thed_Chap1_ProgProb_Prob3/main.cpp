/* Matthew McGilvery
 3 - 7 - 15
 #3 from Savitch Programming Problems;
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants : you  must add const before the variable

//Function Prototypes

//Execution begins here!
int main( )    {
    //Declare Variables
    int q, d, n, p, ttlchng;
    float chngind;
    //Greet user
    cout << "Hello!" << endl;
    //Request data from user
    cout << "Press enter number of quarters." << endl;
    cin >> q;
    cout << "Enter the number of dimes. " << endl;
    cin >> d;
    cout << "Enter the number of nickels. " << endl;
    cin >> n;
    cout << "Enter the number of pennies. " << endl;
    cin >> p;
    //Make Calculation
    ttlchng = q*25 + d*10 + n*5 + p;
    chngind = q*25e-2 + d*1e-1 + n*5e-2 + p*1e-2;
    //Output data
    cout << "Your change is " << ttlchng << "¢, ";
    cout << "or $" << chngind << "." <<endl;
    //Exit Stage left
    return 0;
}