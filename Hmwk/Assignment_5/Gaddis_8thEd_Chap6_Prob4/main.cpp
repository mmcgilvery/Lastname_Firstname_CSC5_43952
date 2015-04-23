/* Matthew McGilvery
4 - 21 - 15
 Gaddis, Chapter 6, Programming Challenges, #4
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float getSouth (int);
float getNorth (int);
float getEast (int);
float getWest (int);
float getCent (int);
void lowest(int, int, int, int, int);
//Execution Begins Here
int main(int argc, char** argv) {
    int auto1, auto2, auto3, auto4, auto5;// accidents in north, south, east, west, and central
    cout << "We are going to calculate the safest driving region based on traffic accidents."<< endl;
    cout << endl;
    //Output
   auto1 = getNorth(auto1);
   auto2 = getSouth(auto2);
   auto3 = getEast(auto3);
   auto4 = getWest(auto4);
   auto5 = getCent(auto5);
   lowest(auto1, auto2, auto3, auto4, auto5);
}


float getNorth (int auto1){
    cout << "Enter the amount of auto accidents for the North, followed by the enter key."<< endl;
    cin >> auto1;
    return auto1;
} 
float getSouth (int auto2){
    cout << "Enter the amount of auto accidents for the South, followed by the enter key."<< endl;
    cin >> auto2;
    return auto2;
}
float getEast (int auto3){
    cout << "Enter the amount of auto accidents for the East, followed by the enter key."<< endl;
    cin >> auto3;
    return auto3;
}
float getWest (int auto4){
    cout << "Enter the amount of auto accidents for the West, followed by the enter key."<< endl;
    cin >> auto4;
    return auto4;
}
float getCent (int auto5){
    cout << "Enter the amount of auto accidents for the Central, followed by the enter key."<< endl;
    cin >> auto5;
    return auto5;
}
void lowest(int auto1, int auto2, int auto3, int auto4, int auto5){
    float lowest = auto1;
    string low = "North";
    if(auto2 < lowest)
    {
        low = "South";
        lowest = auto2; 
    }
    if(auto3 < lowest)
    {
        low = "East";
        lowest = auto3;
    }
    if(auto4 < lowest){
        low = "West";
        lowest = auto4;
    }
    if(auto5 < lowest){
        low = "Central";
        lowest = auto5;
    }
    
    cout << "The safest region for driving is " << low;

}