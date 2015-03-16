/* Matthew McGilvery
 3 - 10 - 15
 #5 from Savitch (Practice problems) Chapter 2, 9th ED;
 In class completion */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants
float mtTn = 35273.92;

//Function Prototypes

//Execution begins here!
int main( )    {
    //Declare variables
    unsigned short ozCrl;
    float crlMtTn, crlNeed;
    //Request input from user
    cout << "Please enter the amount of oz of your cereal box (use positive integers) ."<< endl;
    cin >> ozCrl;
    //Make Calculation
    crlMtTn = ozCrl/mtTn;
    crlNeed = (mtTn - ozCrl)/ozCrl;
    //Output
    cout << "A cereal box containing " << ozCrl << " of cereal weighs: ";
    cout << static_cast<float> (crlMtTn) << " metric tons" << endl;
    cout << "The boxes of cereal needed for a metric ton are " << static_cast<float> (crlNeed) << endl;
    //Loop back to start of program
   while (ozCrl >= 0) {
    cout << " "<< endl;
    cout << "Please enter the amount of oz of your cereal box (use integers) ."<< endl;
    cin >> ozCrl;
    //Make Calculation
    crlMtTn = ozCrl/mtTn;
    crlNeed = (mtTn - ozCrl)/ozCrl;
    }
    return 0;
}
