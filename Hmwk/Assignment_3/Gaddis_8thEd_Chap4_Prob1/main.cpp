/* Matthew McGilvery
 3 - 25 - 15
 Gaddis, Chapter 4, Programming Challenges, #1
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
    short num1, num2;
    //Input/Assigned Values
    cout << "We are going to calculate the larger of two numbers." << endl;
    cout << endl;
    cout << "Enter a whole number, followed by the enter button." << endl;
    cin >> num1;
    cout << "Enter another whole number, followed by the enter button." << endl;
    cin >> num2;
    //Output Everything
    if (num1 > num2){
        cout << "The first number you entered, "<< num1 << " is larger than the second, "<< num2 << "." << endl;
    }
    else {
        cout << "The second number you entered, "<< num2 << " is larger than the first, "<< num1 << "." << endl;
 
    }
    //Exit stage right
    return 0;
}

