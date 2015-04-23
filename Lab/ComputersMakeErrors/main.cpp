/* Matthew McGilvery
 4 - 20 - 15
 Computers Make Errors
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes(Function for future value Calculation)


using namespace std;
int main(int argc, char** argv) {
    float sum1=0, sum2=0, exSum1, exSum2;
    float val1=0.1f, val2 = 0.5f;
    int nXSum = 1e7;
    //Calculate the sum
    for(int i=1; i <= nXSum; i++){
        sum1+=val1;
        sum2+=val2;
    }
    //Exact Sum are
    exSum1 = nXSum*val1;
    exSum2 = nXSum*val2;
    //Compare the results
    cout << showpoint << setprecision(2) << fixed << right << endl;
    cout << "Exact Sum 1 = "<< exSum1 << endl;
    cout << "Summed Sum 1 = " << sum1 << endl;
    cout << "Percentage Error = " << ((exSum1 - sum1)/exSum1) * 100 << "%" << endl;
    cout << "Exact Sum 2 = "<< exSum2 << endl;
    cout << "Summed Sum 2 = " << sum2 << endl;
    cout << "Percentage Error = " << ((exSum2 - sum2)/exSum2) * 100 << "%" << endl;
    return 0;
}

