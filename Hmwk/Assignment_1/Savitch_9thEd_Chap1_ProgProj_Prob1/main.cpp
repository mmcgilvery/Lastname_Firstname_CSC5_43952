/* Matthew McGilvery
 3 - 8 - 15
 #1 from Savitch (Programming Projects); In class completion*/

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants : you  must add const before the variable

//Function Prototypes

//Execution begins here!
int main( )    {
    int num1, num2, sum, product;
    //Request data from user
    cout << "Please enter the first of two numbers" << endl;
    cin >> num1;
    cout << "Please enter the second of two numbers" << endl;
    cin >> num2;
    //Calculate sum and product
    sum = num1 + num2;
    product = num1 * num2;
    //Output date
    cout << "The sum of the two numbers you have entered is: ";
    cout << sum << "." << endl;
    cout << "The product of the two numbers you have entered is: ";
    cout << product << "." << endl;
    //Say good-bye to user
    cout << "Good-bye!" << endl;
    //Exit Stage left
    return 0;
}