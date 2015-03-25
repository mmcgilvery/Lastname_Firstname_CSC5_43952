/* Matthew McGilvery
 3 - 25 - 15
 Gaddis, Chapter 4, Programming Challenges, #22
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    ofstream out; //Results in file
    float vwdHrs, bill; //Viewed hours; package combinations; cable bill
    const int SIZE = 40; // Max size of name, 39 char; is int by convention rather than unsigned
    char name[SIZE], package; // Customers name
    //Open the file
    out.open ("Cable.txt");
    //Input/Promptings
    cout << "How many hours did you view this month?" << endl;
    cin >> vwdHrs;
    cout << "What is your package A, B, C?" << endl;
    cin >> package;
    cout << "What is the customer's(customers') name?" << endl;
    cin.ignore();
    cin.getline(name, SIZE);
    //Output Everything
    switch (package) {
        case 'A':
        case 'a': { bill = 9.95;
            if (vwdHrs > 10)bill +=2 * (vwdHrs-10);
            break;
        }
        case 'B':
        case 'b': { bill = 14.95;
            if (vwdHrs > 20)bill += (vwdHrs-10);
            break;
        }
        case 'C':
        case 'c': { bill = 19.95;
            bill = 19.95;
            break;
        }
        default: cout << "Invalid Package chosen :^/" << endl;
    };
    //Output the results to the file
    out << fixed << setprecision(2) << showpoint;
    out << "Your cable bill from CSC RCC programming class." << endl;
    out << endl;
    out << "Customer Name: "<< name << endl;
    out << "Package: "<< package << endl;
    out << "Hours Viewed: "<< vwdHrs << endl;
    out << "You owe : "<< bill << endl;
    //Exit stage right
    return 0;
}



