/* Matthew McGilvery
 3 - 20 - 15
 Professor Lehr
 * Gaddis, CH 3, Programming Challenges, #3
 */ 

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float mrtgage, util, phone, cable, mnthExp, yearExp;
    //Input/Assigned Values
    cout << "We are going to calculate your monthly and yearly expense."<< endl;
    cout << "Input your mortgage payment, followed by the enter key."<< endl;
    cin >> mrtgage;
    cout << "Input your utilities payment, followed by the enter key."<< endl;
    cin >> util;
    cout << "Input your phone payment, followed by the enter key."<< endl;
    cin >> phone;
    cout << "Input your cable payment, followed by the enter key."<< endl;
    cin >> cable;
    
    //Process/Calculate
    mnthExp = mrtgage + util + phone + cable;
    yearExp= (12*(mrtgage + util + phone + cable));
    //Output Everything
    cout << "Your monthly expense is $"<< static_cast<float> (mnthExp) << "." << endl;
    cout << "Your yearly expense is $"<< static_cast<float> (yearExp) << "." << endl;
    //Exit stage right
    return 0;
}

