/*
 Matthew McGilvery
 3-17-15
 Professor Mark Lehr
 Savitch, 9th Ed, Ch 3, Practice Problems #1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, const char * argv[]) {
    //Declare Variables
    char prsA, prsB;
    //Request input
    cout << "Please gather 2 people for a game of rock, paper, scissors." << endl;
    cout << "Player 1, please enter r for rock, p for paper, and s for scissors, followed by enter/return." << endl;
    cin >> prsA;
    cout << "Player 2, please enter r for rock, p for paper, or s for scissors, followed by enter/return." << endl;
    cin >> prsB;
    if (prsA == 'r' || 's' && (prsB == 'r' || 's')) {
        cout << "Rock breaks scissors!" << endl;
    }
    else {
    if ((prsA == 'p' || 's') && prsA == 'p' || 's') 
    {
        cout << "Scissors cut paper!" << endl;
    }
    
        
    if (prsA == 'p' || 'r' && (prsB == 'p' || 'r')) {
        cout << "Paper covers rock!" << endl;
    }}
    
    
    return 0;
}