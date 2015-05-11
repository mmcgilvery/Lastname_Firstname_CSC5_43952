/* Matthew McGilvery
 * 4 - 29 - 15
 * Dice Game
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
//User Libraries


//Global Constants


//Function Prototypes
unsigned char dice(unsigned char, unsigned char);
//Execution begins here!
int main() {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    int win = 0 , lose = 0, nThrows = 0, nGames = 200;
    int thwGame = 0, maxNThw = 0;
    //Loop on the games and take stats
    for (int game = 1; game <= nGames; game++){
        int sum = dice(2, 6);
        if (sum == 2 || sum == 3 || sum == 12) lose++;
        else if (sum == 7 || sum == 11) win++;
        else { 
            //Keep throwing
            bool rollAgn;
            do{
                rollAgn = true;
                int sum2 = dice(2, 6);
                if (sum2 == sum){
                    win++;
                    rollAgn = false;
                } else if (sum2 == 7) {
                    lose++;
                    rollAgn = false;
                }
                
            } while (rollAgn);
        }
    }
    //Output wins and losses
    cout << "Total number of Games = " << nGames << endl;
    cout << "Total number of wins = " << win << endl;
    cout << "Total number of wins and losses = " << win + lose << endl;
    cout << "Percentage win: " << (win / nGames)*100 << "%" << endl;
    cout << "Percentage loss: " << (lose / nGames)*100 << "%" << endl;
    return 0;
}
unsigned char dice(unsigned char n, unsigned char sDie){
    unsigned char sum = 0;
    for (int die = 1; die <= n; die ++){
        sum +=(rand()%sDie+1);
    }
    return sum;
}