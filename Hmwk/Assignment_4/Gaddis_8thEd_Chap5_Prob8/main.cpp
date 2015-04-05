/* Matthew McGilvery
4 - 1 - 15
 Gaddis, Chapter 5, Programming Challenges, #8
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    unsigned short k = 1;
    do {
    cout<<"Type a to solve an addition problem."<<endl;
    cout<<"Type b to solve a multiplication problem."<<endl;
    cout<<"Type c to solve a division problem."<<endl;
    cout<<"Type d to solve a subtraction problem."<<endl;
    cout<<"Type anything else to end the program."<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.

    switch(choice){
            case 'a':{
                int sum=1+2+3+4+5+6+7+8+9+10;
                cout<<endl;
                cout<<"The sum of numbers 1 through 10 is = "<<sum<<endl;
                cout<<endl;
                break;
            }
            case 'b':{
                int prod=1*2*3*4*5*6*7*8*9*10;
                cout<<endl;
                cout<<"The factorial of 10 is = " <<prod<<endl;
                cout<<endl;
                break;
            }
            case 'c':{
                float quot=1.0f/2/3/4/5/6/7/8/9/10;
                cout<<endl;
                cout<<"The quotient of numbers 1 through 10 is = "<< quot << ", which can be rounded to 0." <<endl;
                cout<<endl;
                break;
            }
            case 'd':{
                float diff=10-9-8-7-6-5-4-3-2-1;
                cout<<endl;
                cout<<"The difference of numbers 10 through 1 is = "<<diff<<endl;
                cout<<endl;
                break;
            }
            
            default:{
                    cout<<"Leaving already?"<<endl;
            }
    };}
    while (k==1);
    return 0;
}