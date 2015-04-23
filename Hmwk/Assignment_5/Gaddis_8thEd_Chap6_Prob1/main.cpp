/* Matthew McGilvery
4 - 20 - 15
 Gaddis, Chapter 6, Programming Challenges, #1
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float calcRet3 (float, float, float);
//Execution Begins Here
int main(int argc, char** argv) {
    float priceA, priceW, perc;
    cout << "We are going to calculate an item's markup."<< endl;
    cout << endl;
    //Output 
    cout << showpoint << setprecision(2)<< fixed;
    cout << calcRet3(priceA, priceW,perc) << " is the retail price." << endl;
    
}


float calcRet3 (float priceA, float priceW, float perc){
    cout << "Please enter the wholesale price of the item in the format XX.XX, followed by the enter key."<< endl;
    cin >> priceW;
    cout << "Please enter the mark up percentage, followed by the enter key."<< endl;
    cin >> perc;
    cout << "$";
    return priceA= priceW * (1+ (.01f*perc));
}