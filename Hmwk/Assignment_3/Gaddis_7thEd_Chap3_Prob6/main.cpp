/* Matthew McGilvery
 3 - 20 - 15
 Professor Lehr
 * Gaddis, CH 3, Programming Challenges, #5
 */ 

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short score1, score2, score3, score4, score5;
    float average;
    //Input/Assigned Values
    cout << "We are going to calculate your testing average."<< endl;
    cout << "Input a test score, followed by the enter key."<< endl;
    cin >> score1;
    cout << "Input a test score, followed by the enter key."<< endl;
    cin >> score2;
    cout << "Input a test score, followed by the enter key."<< endl;
    cin >> score3;
    cout << "Input a test score, followed by the enter key."<< endl;
    cin >> score4;
    cout << "Input a test score, followed by the enter key."<< endl;
    cin >> score5;
    //Process/Calculate
    average = (score1 + score2 + score3 + score4 + score5)/5.0;
    //Output
    cout << fixed << setprecision(1) << showpoint;
    cout << "Your testing average, with scores "<< score1 << ", "<< score2 << ", " << score3 << ", " << score4 << ", and " << score5 << ", " << endl;
    cout << "is " << average << ".";
    //Exit stage right
    return 0;
}

