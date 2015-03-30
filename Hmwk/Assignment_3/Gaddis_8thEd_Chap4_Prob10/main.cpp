/* Matthew McGilvery
 3 - 27 - 15
 Gaddis, Chapter 4, Programming Challenges, #10
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
    unsigned short month, year;
    float r= year%100;
    //Input/Assigned Values
    cout << "We are going to calculate the days in a month." << endl;
    cout << endl;
    cout << "Enter a month(1-12), followed by the enter key." << endl;
    cin >> month;
    cout << "Enter a year, followed by the enter key." << endl;
    cin >> year;
    //Output Everything
    
    if (r == 0){
        
        if (year%400 == 0){
            if (month == 1){
            cout << "Your month, "<< month << " in the year, "<< year << " has 31 days" << endl;
            }
            else if (month == 3){
            cout << "Your month, "<< month << " in the year, "<< year << " has 31 days" << endl;
            }
            else if (month == 4){
            cout << "Your month, "<< month << " in the year, "<< year << " has 30 days" << endl;
            }
            else if (month == 5){
            cout << "Your month, "<< month << " in the year, "<< year << " has 31 days" << endl;
            }
            else if (month == 6){
            cout << "Your month, "<< month << " in the year, "<< year << " has 30 days" << endl;
            }
            else if (month == 7){
            cout << "Your month, "<< month << " in the year, "<< year << " has 31 days" << endl;
            }
            else if (month == 8){
            cout << "Your month, "<< month << " in the year, "<< year << " has 30 days" << endl;
            }
            else if (month == 9){
            cout << "Your month, "<< month << " in the year, "<< year << " has 31 days" << endl;
            }
            else if (month == 10){
            cout << "Your month, "<< month << " in the year, "<< year << " has 31 days" << endl;
            }
            else if (month == 11){
            cout << "Your month, "<< month << " in the year, "<< year << " has 30 days" << endl;
            }
            else if (month == 12){
            cout << "Your month, "<< month << " in the year, "<< year << " has 31 days" << endl;
            }
        }
    }
    if (month == 2){
        if (year%400 == 0){
            if (year%400 == 0){
                 cout << "Your month, "<< month << " in the year, "<< year << " has 29 days" << endl;
            
            }
            if (year%400 != 0){
                 cout << "Your month, "<< month << " in the year, "<< year << " has 28 days" << endl;
            
            }
            
        }
        if (year%400 != 0){
            if (year%4 == 0){
                cout << "Your month, "<< month << " in the year, "<< year << " has 29 days" << endl;
            }
            if (year%4 != 0) {
            cout << "Your month, "<< month << " in the year, "<< year << " has 28 days" << endl;
        }
        }
        
    }
    
    //Exit stage right
    return 0;
}

