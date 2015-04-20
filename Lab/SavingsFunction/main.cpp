/* Matthew McGilvery
 4 - 20 - 15
 Savings Calculations Function
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes(Function for future value Calculation)

float save1(float, float, int);//Power Function
float save2(float, float, int);// Exp and Log Func
float save3(float, float, int);// For-Loop
float save4(float, float, int);//Recursive - Calling Itself
float save5(float= 100.0f, float = 0.08f, int=9 );//Defaulted Parameter
void  save6(float &,float,  float,  int);//Pass By Reference
void  save7(float &,float, int);//Pass By Reference
float save1(float, float, float);
//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv = 100.0f; // Present Value in $s
    float ir = 0.08f; // Interest rate
    int nC = 9; //Number of compounding periods
    //Output the inputs
    cout << fixed << setprecision(2) << showpoint;
    cout << "Present Value = $" << pv << endl;
    cout << "Interest Rate = " << ir * 100 << "%" << endl;
    cout << "Number of Compounding Periods = " << nC << "(yrs) "<< endl;
    //Calculate the savings
    cout << "Savings Function 1 = $" << save1(pv, ir, nC) << endl;
    float nCf = nC;
    cout << "Savings Function 1 = $" << save1(pv, ir, nCf) << endl;
    cout << "Savings Function 2 = $" << save1(pv, ir, nC) << endl;
    cout << "Savings Function 3 = $" << save3(pv, ir, nC) << endl;
    cout << "Savings Function 4 = $" << save4(pv, ir, nC) << endl;
    cout << "Savings Function 5 = $" << save5(pv, ir, nC) << endl;
    cout << "Savings Function 5 = $" << save5(pv, ir) << endl;
    cout << "Savings Function 5 = $" << save5(pv) << endl;
    cout << "Savings Function 5 = $" << save5() << endl;
    float fv;
    save6 (fv, pv, ir, nC);
    cout << "Savings Function 6 = $" << fv<< endl;
    save7 (fv, pv, ir, nC);
    return 0;
}
float save1 (float p, float i, int n){
    return p*pow((1+i),n);
}
float save1 (float p, float i, float n){
    return p*pow((1+i),n);
}
float save2 (float p, float i, int n){
    return p*exp(n*log(1+i));
}
float save3 (float p, float i, int n){
for (int year = 1; year <= n; year++) p*=(1+i);
return p;
}
float save4 (float p, float i, int n){
if (n<= 0) return p; //1st return
return save4(p, i, n-1)*(1+i);//2nd return
}
float save5 (float p, float i, int n){
    return p*pow((1+i),n);
}
void save6(float &f,  float p,  float i,  int n) {f= p*pow((1+i),n);}//Pass By Reference
void save6(float p,  float i,  int n) {p= p*pow((1+i),n);}//Pass By Reference

//Inputs
// p -> Present Value $'s
// i -> Interest Rate % per Compounding Period
// n -> Compounding Period years
//Outputs
// fv - > future values

