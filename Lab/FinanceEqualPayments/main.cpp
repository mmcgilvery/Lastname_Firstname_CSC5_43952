/* Matthew McGilvery
 4 - 27 - 15
 Car Finance Function
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes(Function for future value Calculation)

float bPayment(float, float, int ,float); //For-Loop
float eqlPay(float, float, int);//
float eqlPay1(float, float, int);//
//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float price = 1e4f, incrmnt = 0; //10k
    float dwnPymt = 1e-1f; //Down payment % of purchase price
    float intRate= 3.29e-2; //Interest Rate / yr
    int nMnths = 60; //Number of months
    float penny = 1e-2f;
    float halfP = 5e-3f;
    float mnPmnt = 1.65501e2f; // Monthly Payment
    float f, i, n;
    //Calculate the amount to finance
    float finance = price * (1-dwnPymt);
    cout << fixed << setprecision(2) << showpoint;
    cout << "Purchase Price = $" << price << endl;
    cout << "Down Payment = $"<< price * dwnPymt << endl;
    cout << "Interest Rate = " << intRate * 100 <<"%" << endl;
    cout << "Months to Finance = " << nMnths << endl;
    cout << "Amount Finance = $" << finance << endl;
    
    //Balloon Payment and Monthly Payment
    cout << fixed << setprecision(2) << showpoint;
    cout << "Purchase Price = $" << price << endl;
    cout << "Monthly Payment = $" << eqlPay(f, i, n) << endl;
    cout << "Monthly Payment = $" << eqlPay1(f, i, n) << endl;
    cout << "Balloon Payment = $" << bPayment(finance, intRate/12, nMnths ,mnPmnt);
    
    return 0;
}
//Balloon Payment Function
//Input
//f -> Financed Amount $'s
//i -> Interest Rate / month
//n -> months
//p -> monthly payments
//Output
// bln -> Balloon Payment $'s
float bPayment(float f, float i, int n,float p){
    for (unsigned short months = 1; months < n; months ++){
        f*=(1+i);//Increase due to the interest rate
        f -= p;//Decrease due to payment
        
    }
    return f; //Balloon Payment
};

float eqlPay(float f, float i, int n){
    float intRate= 3.29e-2; //Interest Rate / yr
    float price = 1e4f, incrmnt = 0; //10k
    float dwnPymt = 1e-1f; //Down payment % of purchase price
    float finance = price * (1-dwnPymt);
    int nMnths = 60; //Number of months
    //Calculate the monthly payment without interest
    float mnPmnt = finance/nMnths; //Payment without interest
    float penny = 1e-2f;
    float halfP = 5e-3f;
    //Calculate the Balloon payment tending to zero
    float bln = 0;
    do {
        mnPmnt += incrmnt;
        mnPmnt = static_cast<int>((mnPmnt+halfP)*100)/100.0f;
        bln = bPayment(finance, intRate/12, nMnths ,mnPmnt);
        incrmnt = bln / nMnths;
    } while(incrmnt > penny || incrmnt < -penny);
    return mnPmnt;
};

float eqlPay1(float f, float i, int n){
    float temp = pow((1+i),n);
    return (i*temp*f)/(temp-1);
};
