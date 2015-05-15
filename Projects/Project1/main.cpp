/* Matthew McGilvery
 * 5-9-15
 * Project 1: A 3 game set of tennis
 */

//System Libraries
#include <iostream>
#include <fstream>

using namespace std;
//User Libraries


//Global Constants : you  must add const before the variable

//Function Prototypes
void game1(); // Game 1
void game2(); // Game 2
void game3(); // Game 3 : Final Game of tennis

int main(int argc, char** argv)
    {
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
    for (unsigned int k = 1; k <= 4; k++)
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
            points += points;

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
            points += points;
            }
        }
    if (points == 60)
        {
        cout << "You won a game!" << endl;
        game = 1 + game;
        cout << "Your total amount of games is 1." << endl;
        }
    else
        {
        cout << "You lost the game" << endl;
        }
    }

void game2()
    {
    unsigned short game = 0, points = 0, serve, serve2, serve3;
    for (unsigned int k = 1; k <= 4; k++)
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
            points += points;

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
            points += points;
            }
        }
    if (points == 60)
        {
        cout << "You won a game!" << endl;
        game = 1 + game;
        cout << "Your total amount of games is 2." << endl;
        }
    else
        {
        cout << "You lost the game" << endl;
        }
    }

void game3()
    {
    unsigned short game = 0, points = 0, serve, serve2, serve3;
    for (unsigned int k = 1; k <= 4; k++)
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
            points += points;

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
            points += points;
            }
        }
    ofstream file;
    file.open("Score.data");
    if (points == 60)
        {
        cout << "You won a game!" << endl;
        file << "Your total amount of games is 3" << endl;
        file << "You won!" << endl;
        file << "Thank you for playing tennis with me." << endl;
        file.close();
        cout << "A file containing your results is now available." << endl;
        }
    else
        {
        file << "You lost the game :-/" << endl;
        file << "Thank you for playing tennis with me." << endl;
        file.close();
        cout << "A file containing your results is now available." << endl;
        }
    }