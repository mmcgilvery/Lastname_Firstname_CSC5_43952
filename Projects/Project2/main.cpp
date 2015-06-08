/* Matthew McGilvery
 * 6-8-15
 * Project 2: A 3 game set of tennis
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//User Libraries


//Global Constants : you  must add const before the variable

//Function Prototypes
void game1(); // Game 1
void game2(); // Game 2
void game3(); // Game 3 : Final Game of tennis
int binSrch(int *, const unsigned short, const unsigned short &); // search

int main(int argc, char** argv)
{   int game;
    cout << "After entering a letter or number, hit the return/enter key." << endl;
    cout << endl;
    cout << "Would you like to play a game of tennis?" << endl;
    char choice;
    cin >> choice;
    switch (choice)
    {
        case 'Y':
        {
            cout << "Enter the letter s to begin the game" << endl;
            char start;
            cin >> start;
            switch (start)
            {
                case 's':
                {
                    game1();
                    game2();
                    game3();
                    
                    break;
                }
                case 'S':
                {
                    game1();
                    game2();
                    game3();
                    break;
                }
                default:
                {
                    game1();
                    game2();
                    game3();
                }
            }
        }
        case 'y':
        {
            cout << "Enter the letter s to begin the game" << endl;
            char start;
            cin >> start;
            switch (start)
            {
                case 's':
                {
                    game1();
                    game2();
                    game3();
                    break;
                }
                case 'S':
                {
                    game1();
                    game2();
                    game3();
                    break;
                }
                default:
                {
                    game1();
                    game2();
                    game3();
                }
            }
            
        }
        default: cout << "Goodbye :-)" << endl;
    }
    return 0;
}

void game1()
{
    unsigned short game = 0, points = 0, serve, serve2, serve3;
    cout << "We are going to play a game of tennis." << endl;
    cout << "The instructions to the game can be found in the attached PDF." << endl;
    cout << "Enjoy" << endl;
    for (unsigned int A = 0; A <= 3; A++)
    {
        cout << "Please enter the type of serve you would like to hit, followed by the enter key." << endl;
        cin >> serve;
        if (serve == 1)
        {
            cout << "Your opponent responded with soft flat shot." << endl;
            cout << "Respond with the corresponding shot type number you'd like." << endl;
            cin >> serve2;
            if (serve2 == 1)
            {
                cout << "You won the point." << endl;
                points += 15;
                cout << "Your point total is " << points << endl;
            }
            else if (serve2 == 2)
            {
                cout << "Your opponent responded with deep topspin shot." << endl;
                cout << "Respond with the corresponding shot type number you'd like." << endl;
                cin >> serve3;
                if (serve3 == 1)
                {
                    cout << "Their shot hit the net, so you won the point!" << endl;
                    points += 15;
                    cout << "Your point total is " << points << endl;
                }
                else if (serve3 == 2 || serve3 == 3)
                {
                    cout << "You lost the point." << endl;
                    points += 0;
                    cout << "Your point total is " << points << endl;
                }
            }
            else if (serve2 == 3)
            {
                cout << "Your opponent responded with short slice shot." << endl;
                cout << "Respond with the corresponding shot type number you'd like." << endl;
                cin >> serve3;
                if (serve3 == 1 || serve3 == 3)
                {
                    cout << "You won the point!" << endl;
                    points += 15;
                    cout << "Your point total is " << points << endl;
                }
                else
                {
                    cout << "You lost the point." << endl;
                    points += 0;
                    cout << "Your point total is " << points << endl;
                }
                
            }
        }
        else if (serve == 2)
        {
            cout << "Your opponent responded with hard flat shot." << endl;
            cout << "Respond with the corresponding shot type number you'd like." << endl;
            cin >> serve2;
            if (serve2 == 2)
            {
                cout << "You won the point with a drop shot." << endl;
                points += 15;
                cout << "Your point total is " << points << endl;
            }
            else if (serve2 == 1 || serve2 == 3)
            {
                cout << "You lost the point" << endl;
                points += 0;
                cout << "Your point total is " << points << endl;
            }
            
        }
        else if (serve == 3)
        {
            cout << "Your opponent responded with drop shot." << endl;
            cout << "Respond with the corresponding shot type number you'd like." << endl;
            cin >> serve2;
            if (serve2 == 1 || serve2 == 3)
            {
                cout << "You won the point with a down the line winner." << endl;
                points += 15;
                cout << "Your point total is " << points << endl;
            }
            else if (serve2 == 2)
            {
                cout << "You lost the point" << endl;
                points += 0;
                cout << "Your point total is " << points << endl;
            }
        }
        if (points < 60) A=0;
        else A = 4;
    }
    
    if (points == 60)
    {
        
        cout << "You won a game!" << endl;
        game = 1;
        cout << "Your total amount of games is 1." << endl;
    }
    else
    {
        
        cout << "You lost the game!" << endl;
        game = 0;
        cout << "Your total amount of games is 0." << endl;
    }
    }
void game2()
{
    unsigned short game = 0, points = 0, serve, serve2, serve3;
    for (unsigned int A = 0; A <= 3; A++)
    {
        cout << "Please enter the type of serve you would like to hit, followed by the enter key." << endl;
        cin >> serve;
        if (serve == 1)
        {
            cout << "Your opponent responded with soft flat shot." << endl;
            cout << "Respond with the corresponding shot type number you'd like." << endl;
            cin >> serve2;
            if (serve2 == 1)
            {
                cout << "You won the point." << endl;
                points += 15;
                cout << "Your point total is " << points << endl;
            }
            else if (serve2 == 2)
            {
                cout << "Your opponent responded with deep topspin shot." << endl;
                cout << "Respond with the corresponding shot type number you'd like." << endl;
                cin >> serve3;
                if (serve3 == 1)
                {
                    cout << "Their shot hit the net, so you won the point!" << endl;
                    points += 15;
                    cout << "Your point total is " << points << endl;
                }
                else if (serve3 == 2 || serve3 == 3)
                {
                    cout << "You lost the point." << endl;
                    points += 0;
                    cout << "Your point total is " << points << endl;
                }
            }
            else if (serve2 == 3)
            {
                cout << "Your opponent responded with short slice shot." << endl;
                cout << "Respond with the corresponding shot type number you'd like." << endl;
                cin >> serve3;
                if (serve3 == 1 || serve3 == 3)
                {
                    cout << "You won the point!" << endl;
                    points += 15;
                    cout << "Your point total is " << points << endl;
                }
                else
                {
                    cout << "You lost the point." << endl;
                    points += 0;
                    cout << "Your point total is " << points << endl;
                }
                
            }
        }
        else if (serve == 2)
        {
            cout << "Your opponent responded with hard flat shot." << endl;
            cout << "Respond with the corresponding shot type number you'd like." << endl;
            cin >> serve2;
            if (serve2 == 2)
            {
                cout << "You won the point with a drop shot." << endl;
                points += 15;
                cout << "Your point total is " << points << endl;
            }
            else if (serve2 == 1 || serve2 == 3)
            {
                cout << "You lost the point" << endl;
                points += 0;
                cout << "Your point total is " << points << endl;
            }
            
        }
        else if (serve == 3)
        {
            cout << "Your opponent responded with drop shot." << endl;
            cout << "Respond with the corresponding shot type number you'd like." << endl;
            cin >> serve2;
            if (serve2 == 1 || serve2 == 3)
            {
                cout << "You won the point with a down the line winner." << endl;
                points += 15;
                cout << "Your point total is " << points << endl;
            }
            else if (serve2 == 2)
            {
                cout << "You lost the point" << endl;
                points += 0;
                cout << "Your point total is " << points << endl;
            }
        }
        if (points < 60) A=0;
        else A = 4;
    }
    
    if (points == 60)
    {
        
        cout << "You won a game!" << endl;
        game = 1;
        cout << "Your total amount of games is 2." << endl;
    }
    else
    {
        
        cout << "You lost the game!" << endl;
        game = 0;
        cout << "Your total amount of games is 0." << endl;
    }
    }

void game3()
{
    unsigned short game = 0, points = 0, serve, serve2, serve3;
    for (unsigned int A = 0; A <= 3; A++)
    {
        cout << "Please enter the type of serve you would like to hit, followed by the enter key." << endl;
        cin >> serve;
        if (serve == 1)
        {
            cout << "Your opponent responded with soft flat shot." << endl;
            cout << "Respond with the corresponding shot type number you'd like." << endl;
            cin >> serve2;
            if (serve2 == 1)
            {
                cout << "You won the point." << endl;
                points += 15;
                cout << "Your point total is " << points << endl;
            }
            else if (serve2 == 2)
            {
                cout << "Your opponent responded with deep topspin shot." << endl;
                cout << "Respond with the corresponding shot type number you'd like." << endl;
                cin >> serve3;
                if (serve3 == 1)
                {
                    cout << "Their shot hit the net, so you won the point!" << endl;
                    points += 15;
                    cout << "Your point total is " << points << endl;
                }
                else if (serve3 == 2 || serve3 == 3)
                {
                    cout << "You lost the point." << endl;
                    points += 0;
                    cout << "Your point total is " << points << endl;
                }
            }
            else if (serve2 == 3)
            {
                cout << "Your opponent responded with short slice shot." << endl;
                cout << "Respond with the corresponding shot type number you'd like." << endl;
                cin >> serve3;
                if (serve3 == 1 || serve3 == 3)
                {
                    cout << "You won the point!" << endl;
                    points += 15;
                    cout << "Your point total is " << points << endl;
                }
                else
                {
                    cout << "You lost the point." << endl;
                    points += 0;
                    cout << "Your point total is " << points << endl;
                }
                
            }
        }
        else if (serve == 2)
        {
            cout << "Your opponent responded with hard flat shot." << endl;
            cout << "Respond with the corresponding shot type number you'd like." << endl;
            cin >> serve2;
            if (serve2 == 2)
            {
                cout << "You won the point with a drop shot." << endl;
                points += 15;
                cout << "Your point total is " << points << endl;
            }
            else if (serve2 == 1 || serve2 == 3)
            {
                cout << "You lost the point" << endl;
                points += 0;
                cout << "Your point total is " << points << endl;
            }
            
        }
        else if (serve == 3)
        {
            cout << "Your opponent responded with drop shot." << endl;
            cout << "Respond with the corresponding shot type number you'd like." << endl;
            cin >> serve2;
            if (serve2 == 1 || serve2 == 3)
            {
                cout << "You won the point with a down the line winner." << endl;
                points += 15;
                cout << "Your point total is " << points << endl;
            }
            else if (serve2 == 2)
            {
                cout << "You lost the point" << endl;
                points += 0;
                cout << "Your point total is " << points << endl;
            }
        }
        if (points < 60) A=0;
        else A = 4;
    }
    
    if (points == 60)
    {
        
        cout << "You won a game!" << endl;
        game = 3;
        cout << "Your total amount of games is 3." << endl;
    }
    else
    {
        
        cout << "You lost the game!" << endl;
        game = 0;
        cout << "Your total amount of games is 0." << endl;//All or nothing: You must win all 3 games to be victorious
    }
    ofstream file; //Introducing file, ofstream variable to accept data
    string name; // Introducing name, string variable to accept a name
    file.open("Score.data"); //File Manipulation
    cout << "Enter your first name." << endl;
    cin >> name;
    if (game == 3)
    {
        cout << name << ", you won the final game!" << endl;
        file << "Your total amount of games is 3" << endl;
        const unsigned short SIZE = 4, ideal = 3;//Amount of space within the array, and the ideal number for the bin search
        int myArray[SIZE] = {0, 1, 2, 3};
        int results = binSrch(myArray, SIZE, ideal);
        if (results == 3){// If the player won, read "winner" date into file.
            file << name <<", you won!" << endl;
            file << "Thank you for playing tennis with me." << endl;
            file.close(); // Close File
            cout << "A file containing your results is now available." << endl;
        }
    }
    else 
     //In the case of perhaps entering a wrong key
    {
        file << name << ", you lost the game :-/" << endl; // Otherwise, read "loser" date into file.
        file << "Thank you for playing tennis with me." << endl;
        file.close();
        cout << "A file containing your results is now available." << endl;
    }
}

int binSrch(int *array, const unsigned short numElems, const unsigned short &value) //Binary search with pointer, return value, bool, and array usage
    {
    int first = 0; // First array element 
            int last = numElems - 1;  
            int middle;
            int position = -1; 
    bool found = false; // Flag 
    while (!found && first <= last)
        {
        middle = (first + last) / 2; // Calculate midpoint 
        if (array[middle] == value) // If value is found at mid 
            {
            found = true;
            position = middle;
            }
        else if (array[middle] > value) // If value is in lower half 
            last = middle - 1;
        else if (array[middle] < value)
            first = middle + 1; // If value is in upper half 
        }
    return position;
    } 