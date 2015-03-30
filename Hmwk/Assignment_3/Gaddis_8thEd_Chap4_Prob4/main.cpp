/* Matthew McGilvery
 3 - 26 - 15
 Gaddis, Chapter 4, Programming Challenges, #4
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float length1, width1, area1, length2, width2, area2;
    //Input/Assigned Values
    cout << "We are going to calculate an area of two rectangles." << endl;
    cout << endl;
    cout << "Enter the length of the first rectangle, followed by the enter/return button." << endl;
    cin >> length1;
    cout << "Enter the width of the first rectangle a rectangle, followed by the enter/return button." << endl;
    cin >> width1;
    cout << "Enter the length of the second rectangle, followed by the enter/return button." << endl;
    cin >> length2;
    cout << "Enter the width of the second rectangle a rectangle, followed by the enter/return button." << endl;
    cin >> width2;
    //Calculate
    area1 = width1 * length1;
    area2 = width2 * length2;
    //Output Everything
    cout << "Area 1 is " << area1 << ", and Area 2 is " << area2 << "." << endl;
    if (area1 > area2){
        cout << endl;
        cout << "Area 1 is larger than Area 2."<< endl;
    }
    if (area1 == area2){
        cout << endl;
        cout << "Area 1 is the same as Area 2."<< endl;
    }
    //Exit stage right
    return 0;
}

