/* Matthew McGilvery
4 - 1 - 15
 Gaddis, Chapter 5, Programming Challenges, #9
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short flrStrt= 1, floors, occRoom, occRoom2, unOcc, unOcc2, rooms, rooms2, roomTtl;
    //starting floor, number of floors, occupied room, new values of occupied room, unoccupied room, new value of occupied room
    //room number, new value of room number, total number of rooms
    float perc;
    cout << "We are going to calculate the occupancy rate for a hotel." << endl;
    cout << endl;
    cout << "How many floors does the hotel have? Follow with the enter key" << endl;
    cin >> floors;
            
    for (flrStrt = 1.0 ; flrStrt <= floors; flrStrt += 1){
        cout << "How many rooms are on the floor? Follow with the enter key" << endl;
        cin >> rooms;
        cout << "How many of the rooms are occupied? Follow with the enter key" << endl;
        cin >> occRoom;
        unOcc = rooms - occRoom;
        occRoom2 += occRoom;
        unOcc2 += unOcc;
        rooms2 += rooms;
    }
    cout << fixed << setprecision (2) << showpoint;
    roomTtl = rooms * floors;
    perc = 1.0 * occRoom2/roomTtl;
    cout << "Rooms     Occupied Rooms  Unoccupied    Percentage of rooms occupied" << endl;
    cout << setw(4) << "---------------------------------------------------------------" << endl;
    
    cout << roomTtl << "      " << setw(4) << "   "  << occRoom2 << "           " << setw(4) << unOcc2 <<  "             "  << static_cast <float> (100*(perc))<< "%" << endl;
    cout << "---------------------------------------------------------------" << endl;
    //Exit stage right
    return 0;
}



