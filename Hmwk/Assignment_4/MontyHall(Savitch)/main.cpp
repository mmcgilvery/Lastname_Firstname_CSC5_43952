/* Matthew McGilvery
 4 - 1 - 15
 Play the Monty Hall Game/ 9th Edition, CH 3, Problem 9, Savitch
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand (static_cast<unsigned int> (time(0)));
//Declare Variables
    int nGames, win=0, loss=0, door, doorOpn, prize, othDoor;
    char stay;
//Input
    cout << "We are going to play the Monty Hall Game, Let's make a deal" << endl;
    cout << "How many games would you like to play (1-4x10^9)?" << endl;
    cin >> nGames;
    cout << "Are you going to stay if given the opportunity? Type S for Stay" << endl;
    cout << "or type C for change" << endl;
    cout << "Type anything else to choose the other door" << endl;
    cin >> stay;
    //Loop for all possible digits
    for (int game=1; game <= nGames; game++){;
        //Randomly choose your door
        door = rand ()%3 + 1;
        //Randomly choose the door to open
        prize = rand ()%3 + 1; 
        //Randomly choose the door to open
        do {
            doorOpn = rand()%3 +1;
        
    }   while (door == doorOpn || prize == doorOpn); //Can't be the same
    //What is the other door
        do {
        othDoor = rand () % 3 + 1;
        
    }
        while (othDoor == doorOpn || othDoor == door);
        //Swap the doors if given the opportunity
        if (stay != 'S' && stay != 's'){ //Use DeMorgan's Law
            door = othDoor;        
        }
        //Now statistically count how many wins and losses
        if(door==prize) win ++;
        else loss++;
    }
     //Output the Results
    cout << "Out of " << nGames << " played!" << endl;
    if (stay == 'S' || stay == 's') cout << "I am not changing my door and " << endl;
    else cout << "I am changing my door and " << endl;
    cout << "I win by staying -> " << win <<" times -> " << static_cast <float> (100*win/nGames) << "%"<< endl;
    cout << "vs losing " << loss << " times -> " << static_cast <float> (100*loss/nGames) << " %"<< endl;
    return 0;
    
}

