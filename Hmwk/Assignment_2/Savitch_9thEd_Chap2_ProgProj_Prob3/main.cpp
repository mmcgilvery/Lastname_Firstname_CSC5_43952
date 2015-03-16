/* Matthew McGilvery
 3 - 10 - 15
 #3 from Savitch (Programming Projects) Chapter 2, 9th ED;
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
    unsigned short months;
    float iniSal, finSal;
    //Request input from user
    cout << "We are going to calculate the ROUNDED pay owed to you after how many every months past, you'd like of  your"<< endl;
    cout << "7.6% retroactive pay increase!"<< endl;
    cout << "Enter your previous annual salary." << endl;
    cin >> iniSal;
    cout << "How many months of retroactive pay would you like to calculate?"<< endl;
    cin >> months;  
    //Calculate 
    finSal = months * 1076e-3  * (iniSal/12);
    //Output the results
    cout << "If your previous annual salary was " << iniSal << " then the money owed to you after "<< months <<" months is " << static_cast <float> (finSal) << "$."<< endl;
    //Repeat
    if (iniSal > 0)
    {
    cout << "Enter your previous annual salary." << endl;
    cin >> iniSal;
    cout << "How many months of retroactive pay would you like to calculate?"<< endl;
    cin >> months;      
    //Calculate 
    finSal = months * 1076e-3  * (iniSal/12);
    //Output the results
    cout << "If your previous annual salary was " << iniSal << " then the money owed to you after "<< months <<" months is " << static_cast <float> (finSal) << "$."<< endl;
    //Exit stage right
    
    
    }
    return 0;
   }