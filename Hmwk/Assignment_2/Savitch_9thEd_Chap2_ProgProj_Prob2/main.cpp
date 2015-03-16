/* Matthew McGilvery
 3 - 10 - 15
 #2 from Savitch (Programming Projects) Chapter 2, 9th ED;
 In class completion */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants

//Function Prototypes

//Execution begins here!
int main( )    {
   
        
    //Declare variables
    float iniSal, finSal;
    //Request input from user
    cout << " We are going to calculate the pay owed to you after your 6 month, 7.6% retroactive pay increase!"<< endl;
    cout << "Enter your previous annual salary." << endl;
    cin >> iniSal;
            
    //Calculate 
    finSal = 6 * 1076e-3  * (iniSal/12);
    //Output the results
    cout << "If your previous annual salary was " << iniSal << " then the money owed to you is " << static_cast <float> (finSal) << endl;
    //Exit stage right}
    if (iniSal > 0)
    {
    cout << "Enter your previous annual salary." << endl;
    cin >> iniSal;
    //Calculate 
    finSal = 6 * 1076e-3  * (iniSal/12);
    //Output the results
    cout << "If your previous annual salary was " << iniSal << " then the money owed to you is " << static_cast <float> (finSal) << endl;
    //Exit stage right}
    
    
    }
    return 0;
   }