/* Matthew McGilvery
 3 - 29 - 15
 Menu containing two problems for CSC 5 Assignment 3
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout << "Type a to open problem a, followed by the enter key." <<endl;
    cout << "Type b to open problem b, followed by the enter key." <<endl;
    cout << "Type anything else to end the program." <<endl;
    //Read the choice
    char option;
    cin >> option;
    //Solve a problem that has been chosen.
    switch(option){
            case 'a':{           
    float length1, width1, area1, length2, width2, area2;
    //Input/Assigned Values
    cout << "We are going to calculate an area of two rectangles." << endl;
    cout << endl;
    cout << "Enter the length of the first rectangle, followed by the enter/return button." << endl;
    cin >> length1;
    cout << "Enter the width of the first rectangle a rectangle, followed by the enter/return button." << endl;
    cin >> width1;
    cout << "Enter the length of the second rectangle, followed by the enter/return button." << endl;
    cin >> length2;
    cout << "Enter the width of the second rectangle a rectangle, followed by the enter/return button." << endl;
    cin >> width2;
    //Calculate
    area1 = width1 * length1;
    area2 = width2 * length2;
    //Output Everything
    cout << "Area 1 is " << area1 << ", and Area 2 is " << area2 << "." << endl;
    if (area1 > area2){
        cout << endl;
        cout << "Area 1 is larger than Area 2."<< endl;
    }
    if (area1 == area2){
        cout << endl;
        cout << "Area 1 is the same as Area 2."<< endl;
    }
            break;
            }
            
        
        case 'b':{
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
                break;
            }
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}