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
    const int SIZE = 20;
    int win[SIZE]={}, lose[SIZE] = {}, nThrows[SIZE] = {};
    int nGames = 5, thwGame = 0, maxNThw = 0;
    //Loop on the games and take stats
    for (int game = 1; game <= nGames; game++){
        int sum = dice(2, 6);
        if (sum == 2 || sum == 3 || sum == 12) lose[sum]++;
        else if (sum == 7 || sum == 11) win[sum]++;
        else {
            //Keep throwing
            bool rollAgn;
            do{
                rollAgn = true;
                int sum2 = dice(2, 6);
                nThrows[sum]++;
                thwGame++;
                if (sum2 == sum){
                    win[sum]++;
                    rollAgn = false;
                } else if (sum2 == 7) {
                    lose[sum]++;
                    rollAgn = false;
                }
                
            } while (rollAgn);
             if(thwGame>maxNThw)maxNThw = thwGame;
        }
    }
    //Output wins and losses
    cout << "Total number of Games = " << nGames << endl;
    cout <<"Win Loss   Total %Win   %Loss   Avg throw" << endl;
    for(int sindx=2; sindx < SIZE; sindx++){
        cout << setw(3) << win[sindx]<< " ";
        cout << setw(3) << lose[sindx];
        cout << setw(7) << win[sindx] + lose[sindx];
        cout << fixed << setprecision(2) << showpoint;
        cout << setw(7) << (win[sindx] / nGames)*100.0f << "% ";
        cout << setw(5) << (lose [sindx] / nGames)*100.0f << "% ";
        cout << setw(8) << 1.0f *(nThrows[sindx]) / (win[sindx] + lose[sindx])<< endl;
    }
    cout << "Max throws in any game = " << maxNThw << endl;
    return 0;
}
unsigned char dice(unsigned char n, unsigned char sDie){
    unsigned char sum = 0;
    for (int die = 1; die <= n; die ++){
        sum +=(rand()%sDie+1);
    }
    return sum;
}