/* 
 *Matthew McGilvery
 * 3/16/15
 * Professor Lehr
 * Paycheck with If Else
 */
//System Libraries
#include <iostream>
#include <cstdlib>//I/O Standard
#include <iomanip>//Formatting
#include <fstream>//Reading into a file

using namespace std;
//User Libraries

//Global Constants
//Function Prototypes
//Execution Starts here
int main(int argc, char** argv) {
    //Declare variables
    ofstream out; //Output the results in a file
    float hrsWkd; //Hours worked
    float payRate; //Pay Rate ($'s/hr)
    float oRate=1.5f;//Multiplicative factor of payRate
    float oTime= 40.0f; // Where overtime begins (hr)
    float payChk; //Gross Pay ($'s)
    //Open the file
    out.open("Payroll.dat");
    //Prompt the use for input
    cout << "How many hours this week did you work?" << endl;
    cin >> hrsWkd;
    cout << "What is your payrate?" << endl;
    cin >> payRate;
    //Calculate the paycheck
    if(hrsWkd < oTime){
        payChk = payRate*hrsWkd;
    }
    else{ 
        payChk = payRate*(hrsWkd+(oRate-1)*(hrsWkd - oTime));
    }
        
   
    //Output the results to the screen
    cout << fixed << setprecision(2)<<showpoint; //Sets how far beyond he decimal
    cout << "Hours worked= "<< hrsWkd << " (hrs) "<< endl;
    cout << "Pay Rate = $"<< payRate << " (hr) " << endl;
    cout << "Over time rate = " << oRate << endl;
    cout << "Over time begins at "<< oTime << " (hrs)" << endl;
    cout << "Gross Pay = $" << payChk << endl;
    //Output the results to the file
    out << fixed << setprecision(2)<<showpoint;
    out << "Hours worked= "<< hrsWkd << " (hrs) "<< endl;
    out << "Pay Rate = $"<< payRate << " (hr) " << endl;
    out << "Over time rate = " << oRate << endl;
    out << "Over time begins at "<< oTime << " (hrs)" << endl;
    out << "Gross Pay = $" << payChk << endl;
           
    
    // Close the file 
    out.close();
    return 0;
}

