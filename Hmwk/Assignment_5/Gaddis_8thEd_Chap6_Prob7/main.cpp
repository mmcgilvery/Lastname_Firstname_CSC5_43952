/* Matthew McGilvery
 4 - 21 - 15
 Gaddis, Chapter 6, Programming Challenges, #7
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float fahren(unsigned short);
//Execution Begins Here
int main(int argc, char** argv) {
    unsigned short fahr;
    
    cout << "Celsius" << "     " << "Fahrenheit" << endl;
    for (fahr = 0; fahr <= 20; fahr++){
        cout << showpoint << fixed << setprecision(2);
        cout << setw(5) << left << fahren(fahr) <<  "       " << fahr << endl;
    }
    return 0;
}
//Input
float fahren (unsigned short fahr2){
    float celsius1;
    celsius1 = 0.55555f * (fahr2 - 32);
    return celsius1;
}