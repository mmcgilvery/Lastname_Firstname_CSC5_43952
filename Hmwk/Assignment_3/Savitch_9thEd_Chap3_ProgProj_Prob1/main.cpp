/*
 Matthew McGilvery
 3-21-15
 Professor Mark Lehr
 Savitch, 9th Ed, Ch 3, Programming Projects #1
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, const char * argv[]) {
    //Declare Variables
    string mtwethfrsasu; // Monday - Sunday
    char k =1;
    unsigned short hour, min, lnthCall; //Hour, minute, length of call
    float cost; //Cost
     do 
    {
    cout << "____________" << endl;
    cout << "Cost of Call" << endl;
    cout << "Please input the day of the week using the first two characters(i.e Mo, Tu, etc.), followed by the enter key." << endl;
    cin >> mtwethfrsasu;
    cout << "Please input the hour you began the call(hours 0 - 24), followed by the enter key." << endl;
    cin >> hour;
    cout << "Please input the minute you began the call, followed by the enter key." << endl;
    cin >> min;
    cout << "Please input the length of the call in minutes, followed by the enter key." << endl;
    cin >> lnthCall;
    
    if (mtwethfrsasu == "Mo" || "Tu" || "We" || "Th" ||"Fr")
    {
        if (hour >= 8 || hour <= 18){
        cost = 4e-1 * lnthCall;
        cout << "The cost of your call is $"<< fixed << setprecision(2) << cost << " ."<< endl;
        }
        else {
            if ((hour > 18 && hour <=24) || (hour >= 0 || hour <8))
        {
        cost = 25e-2 * lnthCall;
        cout << "The cost of your call is $"<< fixed << setprecision(2) << cost << " ."<< endl;
            }
    
        if (mtwethfrsasu == "Sa" || "Su")
        {
        cost = 15e-2 * lnthCall;
        cout << "The cost of your call is $"<< fixed << setprecision(2) << cost << "."<< endl;
        }    }
    }
    }
    while (k == 1);
    return 0;
    }