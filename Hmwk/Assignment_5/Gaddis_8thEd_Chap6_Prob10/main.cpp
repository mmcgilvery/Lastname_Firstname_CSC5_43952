/* Matthew McGilvery
 4 - 21 - 15
 Gaddis, Chapter 6, Programming Challenges, #10
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float values2(float, float, unsigned short);
//Execution Begins Here
int main(int argc, char** argv) {
    float p, i;
    unsigned short t, k = 1;
    //Input
    do {
    cout << "Input the present value balance, followed by the enter key." << endl;
    cin >> p;
    cout << "Input the monthly interest rate, followed by the enter key." << endl;
    cin >> i;
    cout << "Input the number of months you'd like to money to sit, followed by the enter key." << endl;
    cin >> t;
    cout <<  showpoint << fixed << setprecision(2);
    cout << "Your account's future value is $" << values2 (p, i, t) << endl;
    cout << endl;
    } while (k==1);
    return 0;
}

//Calculate
float values2 (float p1, float i1, unsigned short t1){
    float f;
    f = p1 * pow((1 + i1), t1);
    return f;
}