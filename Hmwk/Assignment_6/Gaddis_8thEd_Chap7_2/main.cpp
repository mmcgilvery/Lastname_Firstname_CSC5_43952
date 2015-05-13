/* Matthew McGilvery
 * 5 - 4 - 15
 * Chapter 7, of Gaddis 8th Ed, Prob #1
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
//User Libraries


//Global Constants


//Function Prototypes
//Execution begins here!
int main() {
    unsigned const int SIZE = 6000;
    int array[SIZE];
    float months;
    for (int j = 0; j <= 12; j++){
     cout << "Input a your rain fall of the year(in monthly amounts), separated by the press of the enter key." << endl;
     cin >> array[j];
    }
    
    if (array[0] > array [1]){
        if (array[0] > array [2]){
            if (array[0] > array [3]){
                if (array[0] > array [4]){
                    if (array[0] > array [5]) {
                             if (array[0] > array [6]) {
                                 if (array[0] > array [7]) {
                                     if (array[0] > array [8]) {
                                         if (array[0] > array [9]) {
                                             cout << "Highest Month of Rain : " << array [0] << endl;
                                             cout << "Lowest Month of rain : " << array [0] << endl;
                                         }
                                     }
                                 }
                             }
                         
                    }
                }
            }
        
        }
    }
        
    return 0;
}