/* Matthew McGilvery
 3 - 10 - 15
 #1 from Savitch (Practice problems) Chapter 2, 9th ED;
 In class completion */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants

//Function Prototypes

//Execution begins here!
int main()
{
    float radius, vm;
    cout << "Enter radius of a sphere." << endl;
    cin >> radius;
    //Calculate
    (vm) = (4.0 / 3.0) * 3.1415 * radius * radius * radius;
    //Output
    cout << "If your radius is " << radius << ", the volume is "<< static_cast <float> (vm) << "." << endl;
    return 0;
}
