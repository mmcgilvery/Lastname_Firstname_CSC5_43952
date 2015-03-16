/* Matthew McGilvery
 3 - 11 - 15
 #10 from Savitch (Programming Projects) Chapter 2, 9th ED;
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
    char yn;
    float posNum, negNum, numNone, numbers[10], i, ttlPos=0, ttlNeg=0, ttl=0; // I used an array to shorten the code from monstrosity
    float avgNeg, avgPos, avgTtl;
    
    //Request input from user
    cout << "We are going to calculate: " << endl;
    cout << "1. sum of all the numbers greater than zero"<< endl;
    cout << "2. the sum of all the numbers less than zero, and" << endl;
    cout << "3. the sum of all the numbers, whether positive, negative, or zero. As well as the sum of each of the three" << endl;
    cout << endl;
    for(int i=0; i<10; i++)
    {
        cout << "Enter whole number followed by the return/enter button: " << endl;
        cin >> numbers[i];
        if(numbers[i] > 0)
            ttlPos = ttlPos + numbers[i];
        else
            ttlNeg = ttlNeg + numbers[i];
    }
    //Calculate
    ttl = ttlPos + ttlNeg;
    cout <<"The sum of all the numbers less than zero: " << static_cast <float> (ttlNeg) << endl;
    cout<<"The sum of all the numbers greater than zero: " << static_cast <float> (ttlPos) << endl;
    cout <<"The sum of all the numbers, whether positive, negative, or zero: " << static_cast <float> (ttl) << endl;
    
    cout << "How many positive numbers did you enter?" << endl;
    cin >> posNum;
        avgTtl = (ttlPos + ttlNeg)/10;
        avgPos = ttlPos / posNum;
        cout << "The average of all the numbers greater than zero: " << static_cast <float> (avgPos) << endl;
        cout <<"The average of all the numbers, whether positive, negative, or zero: " << static_cast <float> (avgTtl) << endl;
    cout << "Did you enter any zeros? (Enter y or n)" << endl;
    cin >> yn;
    if (yn == 'y') {
        
        cout << "Enter the amount of zeros you inputed." << endl;
        cin >> numNone;
        avgPos = ttlPos / posNum;
        cout << "Did you enter any negatives? (Enter y or n)" << endl;
        cin >> yn;}
        else {
        if (yn == 'y') {
            cout << "Enter the amount of negatives you inputed." << endl;
            cin >> negNum;
            avgNeg = ttlNeg / negNum;
            cout << "The average of all the numbers less than zero: " << static_cast <float> (avgNeg) << endl;
        }
        avgTtl = (ttlNeg + ttlPos)/(posNum + negNum + numNone);
        cout<<"The average of all the numbers greater than zero: " << static_cast <float> (avgPos) << endl;
        cout <<"The average of all the numbers, whether positive, negative, or zero: " << static_cast <float> (avgTtl) << endl;}
        avgTtl = (ttlPos + ttlNeg)/10;
        cout << "The average of all the numbers greater than zero: " << static_cast <float> (avgPos) << endl;
        cout <<"The average of all the numbers, whether positive, negative, or zero: " << static_cast <float> (avgTtl) << endl;
    
    
    return 0;
}