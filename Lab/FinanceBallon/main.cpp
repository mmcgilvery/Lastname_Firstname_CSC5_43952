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
//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float price = 1e4f; //10k
    float dwnPymt = 1e-1f; //Down payment % of purchase price
    float intRate= 3.29e-2; //Interest Rate / yr
    int nMnths = 60; //Number of months
    float mnPmnt = 1.65e2f; // Monthly Payment
    //Calculate the amount to finance
    float finance = price * (1-dwnPymt);
    cout << fixed << setprecision(2) << showpoint;
    cout << "Purchase Price = $" << price << endl;
    cout << "Down Payment = $"<< price * dwnPymt << endl;
    cout << "Interest Rate = " << intRate * 100 <<"%" << endl;
    cout << "Months to Finance = " << nMnths << endl;
    cout << "Amount Finance = $" << finance << endl;
    //Balloon Payment and Monthly Payment
    cout << "Monthly Payment = $" << mnPmnt << endl;
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
