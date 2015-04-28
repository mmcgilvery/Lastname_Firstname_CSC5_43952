/* Matthew McGilvery
 4 - 27 - 15
 Retirement Function
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes(Function for future value Calculation)

float rtirmnt(float, float, int, float); //For-Loop
//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv = 0.00f; // Present Value in $s
    float ir = 0.05f; // Interest rate
    float fdep = 0.15f; //Babylonians say 10%
    float salary = 36000.00; //Salary $/year
    //Output the inputs
    cout << fixed << setprecision(2) << showpoint;
    cout << "Present Value = $" << pv << endl;
    cout << "Interest Rate = " << ir * 100 << "%" << endl;
    //Calculate the savings
    float savReq = salary/ir;//Saving Require $'s
    //Output initial conditions
    cout << fixed << setprecision(2) << showpoint;
    cout << "Investment Rate from MuniBonds = " << ir * 100 <<"%;" << endl;
    cout << "Salary = $" << salary << endl;
    cout << "Yearly Retirement Saved = $" << salary * fdep << endl;
    cout << "Savings Required to Retire = $" << savReq << endl;
    cout << endl << "Year   Ret Savings" << endl;
    float retSav = 0.0f;
    int year = 0;
    //Output our yearly retirement savings
    for (year = 1; retSav <= savReq; year++) {
        float retSav = rtirmnt(pv, ir, year, salary*fdep);
        cout << setw(4) << year << setw(13) << retSav << endl;
    }
    //Exit stage right
    return 0;
}
float rtirmnt (float p, float i, int n, float d){
    for (int year = 1; year <= n; year ++){
    p *= (1+i);
    p += d;
    }
    return p;
}

//Inputs
// p -> Present Value $'s
// i -> Interest Rate % per Compounding Period
// n -> Compounding Period years
// d -> Deposit
//Outputs
// fv - > future values

