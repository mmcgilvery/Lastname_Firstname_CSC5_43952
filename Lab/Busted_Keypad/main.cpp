/* Matthew McGilvery
 4 - 1 - 15
 Busted Keypad, I am hungry, find closes temp for food!
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    unsigned short tAbove= 999, tBelow= 0, temp, posSet=0;
//Prompt the user
    cout << "Input a temperature from 0 to 999, followed by the enter key," << endl;
    cin >> temp;
   
    //Loop for all possible digits
    for (int t100= 0; t100<=9; t100++){
        for (int t10= 0; t10<=9; t10++){
            for (int t1= 0; t1<=9; t1++){
                    if (t100 == 1 || t10 == 1 ||t1== 1) continue;
                    if (t100 == 4 || t10 == 4 ||t1== 4) continue; 
                    if (t100 == 7 || t10 == 7 ||t1== 7) continue;
                    posSet++;
                    unsigned int tloop = (t100 * 100) + (t10 * 10) + t1;
                    unsigned int tdiffA = tloop - temp;
                    unsigned int tdiffB = temp - tloop;
                    if ((tdiffA >= 0) && (tdiffA < (tAbove - temp))) tAbove = tloop;
                    if ((tdiffB >= 0) && (tdiffB < (temp - tBelow))) tBelow = tloop;
                    }
                }
        }
    //Output the range of temperature settings
    cout << "The input temperature = " << temp << endl;
    cout << "The temp on the high side = " << tAbove << " degrees." << endl;
    cout << "The temp on the low side = " << tBelow << " degrees." << endl;
    cout << "There are a total of " << posSet << " temperature settings." << endl;
    //Exit stage right
    return 0;
    
}

