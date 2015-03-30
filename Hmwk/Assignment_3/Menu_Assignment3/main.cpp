/* Matthew McGilvery
 3 - 29 - 15
 Menu containing two problems for CSC 5 Assignment 3
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout << "Type a to open problem a, followed by the enter key." << endl;
    cout << "Type b to open problem b, followed by the enter key." << endl;
    cout << "Type c to open problem c, followed by the enter key." << endl;
    cout << "Type d to open problem d, followed by the enter key." << endl;
    cout << "Type e to open problem e, followed by the enter key." << endl;
    cout << "Type f to open problem f, followed by the enter key." << endl;
    cout << "Type g to open problem g, followed by the enter key." << endl;
    cout << "Type h to open problem h, followed by the enter key." << endl;
    cout << "Type i to open problem i, followed by the enter key." << endl;
    cout << "Type j to open problem j, followed by the enter key." << endl;
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
        case 'c':{
    unsigned int softwr;
    float total;
    //Input/Assigned Values
    cout << "We are going to calculate your purchase." << endl;
    cout << endl;
    cout << "Enter a number of software packages you plan to purchase, followed by the enter key." << endl;
    cin >> softwr;
    //Output Everything
    cout << fixed << setprecision (2) << showpoint << endl;
    if (softwr >= 10 && softwr <= 19){
        total = 99.00 * softwr * 8e-1;
        cout << "The total for your purchase will include a 20% discount," << endl;
        cout << "resulting in a total price of $" << static_cast <float> (total) << endl;
    }
    if (softwr >= 20 && softwr <= 49){
        total = 99.00 * softwr * 3e-1; 
        cout << "The total for your purchase will include a 30% discount," << endl;
        cout << "resulting in a total price of $" << static_cast <float> (total) << endl;

    }
    if (softwr >= 50 && softwr <= 99){
        total = 99.00 * softwr * 4e-1; 
        cout << "The total for your purchase will include a 40% discount," << endl;
        cout << "resulting in a total price of $" << static_cast <float> (total) << endl;

    }
    if (softwr >= 100) {
        total = 99.00 * softwr * 5e-1;
        cout << "The total for your purchase will include a 50% discount," << endl;
        cout << "resulting in a total price of $" << static_cast <float> (total) << endl;

    }
    else if (softwr < 10) {
        cout << "Error." << endl;
    }

                break;
        }
        case 'd':{
    unsigned short p, n, d, q;
    unsigned int total;
    //Input/Assigned Values
    cout << "We are going to calculate whether or not your input is equal to a dollar." << endl;
    cout << endl;
    cout << "Enter a number of pennies, followed by the enter key." << endl;
    cin >> p;
    cout << "Enter a number of nickels, followed by the enter key." << endl;
    cin >> n;
    cout << "Enter a number of dimes, followed by the enter key." << endl;
    cin >> d;
    cout << "Enter a number of quarters, followed by the enter key." << endl;
    cin >> q;
    
    total = p + 5*n + 10*d + 25*q;
    
    //Output Everything
    if (total == 100){
        cout << "CONGRATULATIONS. YOU HAVE ENTERED A DOLLAR!" << endl;
    }
    if (total <= 100){
        cout << "The amount you entered, " << total <<"¢, is lower than a dollar." << endl;
    }
    if (total >= 100){
        cout << "The amount you entered, " << total <<"¢, is more than a dollar." << endl;
    }
    else {
        cout << "Error." << endl;
    }
                break;
        }
        case 'e':{
    unsigned short seconds;
    float minute; // seconds  and minutes
    //Input/Promptings
    cout << "We are going to calculate time." << endl;
    cout << endl;
    cout << "Enter an amount of seconds, followed by enter/return." << endl;
    cin >> seconds;
    //Output Everything
    cout << fixed << setprecision (2) << showpoint;
    if (seconds >= 60) {
        minute = (seconds/60.0);
        cout << "The total amount of time is "<< static_cast <float> (minute) << "." << endl;  
    }
    else {
        cout << "The total amount of time is " << static_cast <int> (seconds) << " seconds." << endl;  
    }
                break;
        }
        case 'f':{
    float mass, weight; // mass of object and weight of object
    //Input/Promptings
    cout << "We are going to calculate the weight of a objects." << endl;
    cout << endl;
    cout << "Enter the mass of an object, followed by enter." << endl;
    cin >> mass;
    //Calculate 
    weight = 9.8 * mass;
    //Output Everything
    cout << fixed << setprecision (2) << showpoint;
    cout << "The weight of the object is: " << weight << "." << endl;
    if (weight <= 10) {
      cout << "With a weight of "<< static_cast <float> (weight) << ", the object is too light."<< endl;   
    }
    if (weight >= 1000) {
      cout << "With a weight of "<< static_cast <float> (weight) << ", the object is too heavy."<< endl;   
    }
    

                break;
        }
        case 'g':{
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

                break;
        }
        case 'h':{
    unsigned short num1;
    //Input/Assigned Values
    cout << "We are going to convert a # into a Roman Numeral." << endl;
    cout << endl;
    cout << "Enter a whole number (from 1-10), followed by the enter button." << endl;
    cin >> num1;
    //Output Everything
    if (num1 == 1){
        cout << num1 << " is equal to I." << endl;
    }
    if (num1 == 2){
        cout << num1 << " is equal to II." << endl;
    }
    if (num1 == 3){
        cout << num1 << " is equal to III." << endl;
    }
    if (num1 == 4){
        cout << num1 << " is equal to IV." << endl;
    }
    if (num1 == 5){
        cout << num1 << " is equal to V." << endl;
    }
    if (num1 == 6){
        cout << num1 << " is equal to VI." << endl;
    }
    if (num1 == 7){
        cout << num1 << " is equal to VII." << endl;
    }
    if (num1 == 8){
        cout << num1 << " is equal to VIII." << endl;
    }
    if (num1 == 9){
        cout << num1 << " is equal to IX." << endl;
    }
    if (num1 == 10){
        cout << num1 << " is equal to X." << endl;
    }
                break;
        }
        case 'i':{
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
                break;
        }
        case 'j':{
    ofstream out; //Results in file
    float vwdHrs, bill; //Viewed hours; package combinations; cable bill
    const int SIZE = 40; // Max size of name, 39 char; is int by convention rather than unsigned
    char name[SIZE], package; // Customers name
    //Open the file
    out.open ("Cable.txt");
    //Input/Promptings
    cout << "We are going to calculate your cable bill." << endl;
    cout << endl;
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
            if (vwdHrs > 10) bill += 2 * (vwdHrs-10);
            break;
        }
        case 'B':
        case 'b': { bill = 14.95;
            if (vwdHrs > 20) bill += (vwdHrs-10);
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
                break;
        }
        
        
        
        
        
        
            default:{
                    cout << "Exit?" << endl;
            }
    };
    return 0;
}