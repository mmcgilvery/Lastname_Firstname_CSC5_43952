/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Add repetition
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void problem1();
void problem2();
void problem3();
void problem4();
//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Repeat lines
    char choice;
    
    do {
    //Display the selection
    cout<<"Type 1 to solve problem 1"<<endl;
    cout<<"Type 2 to solve problem 2"<<endl;
    cout<<"Type 3 to solve problem 3"<<endl;
    cout<<"Type 4 to solve problem 4"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
            case '1':{
                problem1();
                break;
            }
            case '2':{
                problem2();
                break;
            }
            case '3':{
                problem3();
                break;
            }
            case '4':{
                problem4();
                break;
        }
            default:{
                    cout << "Exit?" << endl;
            }
    } } while ( choice >= '1' && choice <= '4');
    
    return 0;
    }

void problem1(){
  int sum=1+2+3+4+5+6+7+8+9+10;
  cout<<endl;
  cout<<"Solution to 1 sum(1->10)="<<sum<<endl;
  cout<<endl;  
};
void problem2(){
    int prod=1*2*3*4*5*6*7*8*9*10;
    cout<<endl;
    cout<<"Solution n!(1->10)="<<prod<<endl;
    cout<<endl;    
};
void problem3 (){
    float quot=1.0f/2/3/4/5/6/7/8/9/10;
    cout<<endl;
    cout<<"Solution to 3 quot(1->10)="<<quot<<endl;
    cout<<endl;
};
void problem4 (){
    for (int d1000= 0; d1000<=9; d1000++){
        for (int d100= 0; d100<=9; d100++){
            for (int d10= 0; d10<=9; d10++){
                for (int d1= 0; d1<=9; d1++){
                    if ((d1000 == 3*d10) && 
                    (d1%2 == 1)   &&
                    ((d1000 + d100 + d10 + d1) == 27) &&
                            (d1!= d10 && d1 != d100 && d1 != d1000 && d10 != d100 && d10 != d1000 && d100 != d1000)) {
                        cout << "The Address number = ";
                        cout << d1000 << d100 << d10 << d1 << endl;
                    }
                }
            }
        }
    }
};