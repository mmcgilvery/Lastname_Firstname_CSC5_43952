/* Matthew McGilvery
 3 - 10 - 15
 #9 from Savitch (Programming Projects) Chapter 2, 9th ED;
 In class completion */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants

//Function Prototypes

//Execution begins here!
int main( )    {
    
    
    //Declare variables
    short numbers[10], i, ttlPos=0, ttlNeg=0, ttl=0;// I used an array to shorten the code from monstrosity.
    
    //Request input from user
    cout << "We are going to calculate: " << endl;
    cout << "1. sum of all the numbers greater than zero"<< endl;
    cout << "2. the sum of all the numbers less than zero, and" << endl;
    cout << "3. the sum of all the numbers, whether positive, negative, or zero." << endl;
    cout << endl;
    for(int i=0; i<10; i++)
    {
        cout << "Enter whole number " << i + 1 << ", followed by the return/enter button: " << i << endl;
        cin >> numbers[i];
        if(numbers[i] > 0)
            ttlPos = ttlPos + numbers[i];
        else
            ttlNeg = ttlNeg + numbers[i];
    }
    //Calculate
    ttl = ttlPos + ttlNeg;
    cout <<"The sum of all the numbers less than zero: " << ttlNeg << endl;
    cout<<"The sum of all the numbers greater than zero: " << ttlPos << endl;
    cout <<"The sum of all the numbers, whether positive, negative, or zero: " << ttl << endl;
    
    
    return 0;
}