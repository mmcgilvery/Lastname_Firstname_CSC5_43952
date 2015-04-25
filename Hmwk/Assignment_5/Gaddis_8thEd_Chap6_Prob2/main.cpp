/* Matthew McGilvery
4 - 20 - 15
 Gaddis, Chapter 6, Programming Challenges, #2
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float getL (float), getW(float);
float getA(float);
//Execution Begins Here
int main(int argc, char** argv) {
    float length, width, area ;// Floats of length, area, and width, to account for possible fractional numbers
    cout << "We are going to calculate the area of a rectangle."<< endl;
    cout << endl;
    //Output 
    cout << showpoint << setprecision(2)<< fixed;
    cout << getA(area);
    return 0;
}


float getL (float length){
    cout << "Please enter the length of the rectangle, followed by the enter key."<< endl;
    cin >> length;
    return length;
}
float getW (float width){
    cout << "Please enter the width of the rectangle, followed by the enter key."<< endl;
    cin >> width;
    return width;
}
float getA (float area){
    float width, length;
    area = (getW(width) * getL (length));
    cout << "The area is ";
    return area;
    
}