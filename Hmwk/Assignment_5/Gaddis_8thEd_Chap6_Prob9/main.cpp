/* Matthew McGilvery
 4 - 21 - 15
 Gaddis, Chapter 6, Programming Challenges, #9
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float values(float, float, unsigned short);
//Execution Begins Here
int main(int argc, char** argv) {
    float f, r; // Final balance, interest rate (annual))
    unsigned short n, k=1; //number of years
    //Input
    do {
    cout << "Input your interest rate, followed by the enter key." << endl;
    cin >> r;
    cout << "Input your desired final balance, followed by the enter key." << endl;
    cin >> f;
    cout << "Input the amount of years you'd like to money to sit, followed by the enter key." << endl;
    cin >> n;
    cout <<  showpoint << fixed << setprecision(2);
    cout << "To have $"<< f << " in your account after "<< n << " years, you must deposit $" << values(f, r, n) << endl;
    cout << endl;
    } while (k==1);
    return 0;
}

//Calculate
float values (float f1, float r1, unsigned short n1){
    float p;
    p = f1/pow(1+(0.01f*r1),n1);
    return p;
}