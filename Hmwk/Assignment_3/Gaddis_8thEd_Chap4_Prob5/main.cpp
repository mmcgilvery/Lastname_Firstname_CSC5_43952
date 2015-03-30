/* Matthew McGilvery
 3 - 25 - 15
 Gaddis, Chapter 4, Programming Challenges, #5
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
    short height; //height of user
    float lbs, bmi; // weight and bmi of user
    //Input/Promptings
    cout << "We are going to calculate BMI." << endl;
    cout << endl;
    cout << "Enter your height in inches, followed by enter.(Use whole numbers)" << endl;
    cin >> height;
    cout << "Enter your weight in pounds, followed by enter." << endl;
    cin >> lbs;
    //Calculate 
    bmi = 703*lbs/(height*height);
    //Output Everything
    cout << fixed << setprecision (2) << showpoint;
    cout << "Your BMI is: " << bmi << "." << endl;
    if (bmi < 18.5) {
      cout << "With a BMI of "<< static_cast <float> (bmi) << ", you may be underweight."<< endl;   
    }
    else {
      cout << "With a BMI of "<< static_cast <float> (bmi) << ", you may be overweight."<< endl;   
    }
    if (bmi >= 18.5 && bmi <= 25) {
      cout << "With a BMI of "<< static_cast <float> (bmi) << ", you are a healthy weight."<< endl;   
    }
    
    //Exit stage right
    return 0;
}



