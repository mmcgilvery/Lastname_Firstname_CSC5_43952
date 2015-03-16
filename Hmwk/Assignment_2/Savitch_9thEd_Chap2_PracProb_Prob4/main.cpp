/* Matthew McGilvery
 3 - 12 - 15
 #4 from Savitch (Programming Projects) Chapter 2, 9th ED;
 In class completion */

//System Libraries
#include <iostream>
#include <string>
using namespace std;
//User Libraries


//Global Constants : you  must add const before the variable


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short num;
    string surname, yournm, food, adj, color, animal;
    //Request input
    cout << "Welcome to Matthew's Madlibs (NOTE: Hit enter after inputing info!)" << endl;
    cout << "Please enter the surname of your teacher."<< endl;
    cin >> surname;
    cout << "Please enter your name." << endl;
    cin >> yournm;
    cout << "Please enter a food item." << endl;
    cin >> food;
    cout << "Now let's get to the fun part!" << endl;
    cout << "Please enter an adjective." << endl;
    cin >> adj;
    cout << "Enter a number between 100 and 200." << endl;
    cin >> num;
    cout << "Enter a color/colour." << endl;
    cin >> color;
    cout << "Lastly, enter an animal." << endl;
    cin >> animal;
    //Process/Calculate
   
    //Output
    cout << "Dear Instructor " << surname<< "," << endl;
    cout << "I am sorry that I am unable to turn in my homework at this time."<< endl;
    cout << "First, I ate a rotten " << food << " , which made me turn " << color <<", and "<< "extremely ill. I came down with a fever of "<< num << "." << endl; 
    cout << "Next, my " << adj << " pet "<< animal << " must have smelled the remains of the "<< food << " on my homework, because he ate it."<< endl;
    cout << "I am currently rewriting my homework and hope you will accept it late." << endl;
    cout << "Sincerely, " <<  endl;
    cout << yournm << "."<< endl;
    //Exit stage right
    return 0;
}

