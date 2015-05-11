/* Matthew McGilvery
 4 - 29 - 15
 * Infinite Exponential Sequence
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

float ourExp(float x);
double ourExp(double x);
//Execution begins here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int> (time(0)));
    //Declare and initialize variables
    const unsigned int MAX = pow(2,31) - 1;
    float xf = 1.0f*rand()/MAX*3+1;
    float xd = 1.0*rand()/MAX*3+1;
    double expApp = ourExp(xd);
    double libExp = exp(xd);
    float error = ((libExp - expApp)/libExp)*100;
    cout << "exp(" << xf << ")=" << libExp << " , " << expApp << " , "<< static_cast <float> (error) << "%" << endl;
    //Call functions and compare
    double error1 = ((libExp - expApp)/libExp)*100;
    cout << "exp(" << xd << ")=" << libExp << " , " << expApp << " , "<< static_cast <float> (error1) << "%" << endl;
    //Exit stage right
    return 0;
}

float ourExp(float x){
    //Declare variables
    float term = 1, exp = 1, tol = x*1.0e-7f;
    for (int nterm = 1; term > tol; nterm++){
        term *= x/nterm;
        exp+= term;
    }
    return exp;
}
double exp(double x){
    //Declare variables
    double exp = 1;
    for (double tol = x*1.0e-16f, term, nterm=1; term > tol; term*=x/nterm, exp += term, nterm ++){
        term *= x/nterm;
        exp+= term;
    }
    return exp;
}