/* Matthew McGilvery
4 - 20 - 15
 Gaddis, Chapter 6, Programming Challenges, #3
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float getSales (float);
float getSales2 (float);
float getSales3 (float);
float getSales4 (float);
void highest(float, float, float, float);
//Execution Begins Here
int main(int argc, char** argv) {
    float sales1, sales2, sales3, sales4;// Floats of length, area, and width, to account for possible fractional numbers
    cout << "We are going to calculate which division had the most sales."<< endl;
    cout << endl;
    //Output
   sales1 = getSales(sales1);
   sales2 = getSales2(sales2);
   sales3 = getSales3(sales3);
   sales4 = getSales4(sales4);
   highest(sales1, sales2, sales3, sales4);
}


float getSales (float sales1){
    cout << "Northeast division, enter your sales, followed by the enter key."<< endl;
    cin >> sales1;
    return sales1;
} 
float getSales2 (float sales2){
    cout << "Southeast division, enter your sales, followed by the enter key."<< endl;
    cin >> sales2;
    return sales2;
}
float getSales3 (float sales3){
    cout << "Southwest division, enter your sales, followed by the enter key."<< endl;
    cin >> sales3;
    return sales3;
}
float getSales4 (float sales4){
    cout << "Northwest division, enter your sales, followed by the enter key."<< endl;
    cin >> sales4;
    return sales4;
}
void highest(float sales1, float sales2, float sales3, float sales4){
    float highest = sales1;
    string high = "Northeast";
    if(sales2 > highest)
    {
        high = "Southeast";
        highest = sales2; 
    }
    if(sales3 > highest)
    {
        high = "Southwest";
        highest = sales3;
    }
    if(sales4 > highest){
        high = "Northwest";
        highest = sales4;
    }
    
    cout << "The highest selling division is the " << high;

}