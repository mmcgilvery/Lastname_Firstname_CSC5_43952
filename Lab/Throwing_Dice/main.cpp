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
    unsigned char nDie1, sDie1;
    const int SIZE = 15;//Size larger than needed
    int freq[SIZE] = {}; // Initializes the array as 0 
    //^(Do this each time you want to do loops involving arrays)^
    int nThrows = 36000;//Number of throws
    int sum = 0; //Add up all of the throws
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Loop, Throw the dice, take stats
    int throws;
    for (throws = 1; throws <= nThrows; throws++){
        freq[dice(2,6)]++;
    }
    //Print the results
    for (int value = 0; value < SIZE; value++){
        sum += freq[value];
        cout << value << " was thrown " << freq[value] << " times!" << endl;
    }
    return 0;
}
unsigned char dice(unsigned char n, unsigned char sDie){
    unsigned char sum = 0;
    for (int die = 1; die <= n; die ++){
        sum +=(rand()%sDie+1);
    }
    return sum;
}