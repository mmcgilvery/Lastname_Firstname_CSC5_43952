/* 
 * File:   main.cpp
 * Author: Matthew McGilvery
 * Purpose:  Problems for Assignment 4 in menu form
 * Add repetition
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
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
    cout<<"Type 5 to solve problem 5"<<endl;
    cout<<"Type 6 to solve problem 6"<<endl;
    cout<<"Type 7 to solve problem 7"<<endl;
    cout<<"Type 8 to solve problem 8"<<endl;
    cout<<"Type 9 to solve problem 9"<<endl;
    cout<<"Type 10 to solve problem 10"<<endl;
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
            case '5':{
                problem5();
                break;
            }
            case '6':{
                problem6();
                break;
            }
            case '7':{
                problem7();
                break;
            }
            case '8':{
                problem8();
                break;
        }
            case '9':{
                problem9();
                break;
            }
            case '10':{
                problem10();
                break;
        }
            default:{
                    cout << "Exit?" << endl;
            }
    } } while ( choice >= '1' && choice <= '10');
    
    return 0;
    }

void problem1(){
    //Declare variables
    unsigned int minNum = 1, maxNum, sum; //minimum number, number inputed by user, sum
    //Input/Promptings
    cout << "We are going to calculate the sum from 1 to a # of your choice." << endl;
    cout << endl;
    cout << "Enter a number, followed by enter. (Use whole numbers)" << endl;
    cin >> maxNum;
    //Calculate + Output
    for (minNum = 1 ; minNum <= maxNum; minNum++){
        sum += minNum;
    }
    //Output Everything
    cout << "The sum of numbers 1 to "<< maxNum << " is " << sum << "."<< endl;
};
void problem2(){
    unsigned short yearSt= 1.0, yrEnd = 25.0; //years of ocean level risings
    float levels = 0;// level of ocean
    //Output levels from year 1 to 25
    cout << fixed << setprecision (2) << showpoint;
    cout << "We are going to calculate the increase of the ocean level." << endl;
    cout << endl;
    cout << "Year                  Ocean Level" << endl;
    cout << "------------------------------------" << endl;
    for (yearSt = 1.0 ; yearSt <= yrEnd; yearSt += 1){
        levels += 1.5;
        cout << setw(4) << yearSt << "                   "<< setw(4) << levels << endl;
        cout << "------------------------------------" << endl;
    }
};
void problem3(){
    unsigned short daySt= 1, dayEnd; //day start, ending day
    float money = 1e-2;// money made
    //Output levels from year 1 to 25
    cout << fixed << setprecision (2) << showpoint;
    cout << "We are going to calculate your incremental penny earnings." << endl;
    cout << endl;
    cout << "Enter the amount of days for which you'd like to calculate change, followed by the enter key." << endl;
    cin >> dayEnd;
            
            
    cout << "Days                  Money Accrued" << endl;
    cout << "------------------------------------" << endl;
    if (daySt == 1.0){
            money = .01;
            cout << setw(4) << daySt << "                   "<< setw(4) << money << endl;
            cout << "------------------------------------" << endl;
        }
    for (daySt = 2.0 ; daySt <= dayEnd; daySt += 1){
        money *= 2;
        cout << setw(4) << daySt << "                   "<< setw(4) << money << endl;
        cout << "------------------------------------" << endl;
    }
    
};
void problem4(){
    float celsius, fahr;//Celsius, Fahrenheit
    //Input
    cout << fixed << setprecision (2) << showpoint;
    cout << "We are going to calculate temperature in Fahrenheit." << endl;
    cout << endl;
    
    //Output and Loop
    cout << "Celsius                  Fahrenheit" << endl;
    cout << "------------------------------------" << endl;
    fahr = celsius * (9/5) + 32 ; //Calculate
    cout << setw(4) << "0" << "                   "<< setw(2) << "32" << endl;
    cout << "------------------------------------" << endl;
    for (celsius = 1.0 ; celsius < 10; celsius += 1){
        fahr = celsius * (9/5) + 32 ; //Calculate
        cout << setw(4) << celsius << "                   "<< setw(4) << static_cast <float> (fahr) << endl;
        cout << "------------------------------------" << endl;
    }
    for (celsius = 10.0 ; celsius <= 20; celsius += 1){
    fahr = celsius * (9/5) + 32 ; //Calculate
    cout << setw(4) << celsius << "                  "<< setw(3) << static_cast <float> (fahr) << endl;
    cout << "------------------------------------" << endl;
}

};
void problem5(){
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
};
void problem6(){
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
};
void problem7(){
    srand (static_cast<unsigned int> (time(0)));
//Declare Variables
    int nGames, win=0, loss=0, door, doorOpn, prize, othDoor;
    char stay;
//Input
    cout << "We are going to play the Monty Hall Game, Let's make a deal" << endl;
    cout << "How many games would you like to play (1-4x10^9)?" << endl;
    cin >> nGames;
    cout << "Are you going to stay if given the opportunity? Type S for Stay" << endl;
    cout << "or type C for change" << endl;
    cout << "Type anything else to choose the other door" << endl;
    cin >> stay;
    //Loop for all possible digits
    for (int game=1; game <= nGames; game++){;
        //Randomly choose your door
        door = rand ()%3 + 1;
        //Randomly choose the door to open
        prize = rand ()%3 + 1; 
        //Randomly choose the door to open
        do {
            doorOpn = rand()%3 +1;
        
    }   while (door == doorOpn || prize == doorOpn); //Can't be the same
    //What is the other door
        do {
        othDoor = rand () % 3 + 1;
        
    }
        while (othDoor == doorOpn || othDoor == door);
        //Swap the doors if given the opportunity
        if (stay != 'S' && stay != 's'){ //Use DeMorgan's Law
            door = othDoor;        
        }
        //Now statistically count how many wins and losses
        if(door==prize) win ++;
        else loss++;
    }
     //Output the Results
    cout << "Out of " << nGames << " played!" << endl;
    if (stay == 'S' || stay == 's') cout << "I am not changing my door and " << endl;
    else cout << "I am changing my door and " << endl;
    cout << "I win by staying -> " << win <<" times -> " << static_cast <float> (100*win/nGames) << "%"<< endl;
    cout << "vs losing " << loss << " times -> " << static_cast <float> (100*loss/nGames) << " %"<< endl;
};
void problem8(){
    unsigned short tAbove= 999, tBelow= 0, temp, posSet=0;
//Prompt the user
    cout << "Input a temperature from 0 to 999, followed by the enter key," << endl;
    cin >> temp;
   
    //Loop for all possible digits
    for (int t100= 0; t100<=9; t100++){
        for (int t10= 0; t10<=9; t10++){
            for (int t1= 0; t1<=9; t1++){
                    if (t100 == 1 || t10 == 1 ||t1== 1) continue;
                    if (t100 == 4 || t10 == 4 ||t1== 4) continue; 
                    if (t100 == 7 || t10 == 7 ||t1== 7) continue;
                    posSet++;
                    unsigned int tloop = (t100 * 100) + (t10 * 10) + t1;
                    unsigned int tdiffA = tloop - temp;
                    unsigned int tdiffB = temp - tloop;
                    if ((tdiffA >= 0) && (tdiffA < (tAbove - temp))) tAbove = tloop;
                    if ((tdiffB >= 0) && (tdiffB < (temp - tBelow))) tBelow = tloop;
                    }
                }
        }
    //Output the range of temperature settings
    cout << "The input temperature = " << temp << endl;
    cout << "The temp on the high side = " << tAbove << " degrees." << endl;
    cout << "The temp on the low side = " << tBelow << " degrees." << endl;
    cout << "There are a total of " << posSet << " temperature settings." << endl;
};
void problem9(){
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
void problem10(){
    unsigned short hrStart= 1, hrEnd; //initial hour of travel, last hour of travel
    float dis = 0, miles, mph;// distance, miles, speed (of car)
    //Output
    cout << fixed << setprecision (2) << showpoint;
    cout << endl;
    cout << "Enter the speed of your vehicle, followed by the enter key." << endl;
    cin >> mph;
    cout << "Enter the amount of hours you traveled, followed by the enter key." << endl;
    cin >> hrEnd;
            
    //Loop
    cout << "Hour                  Miles Voyaged" << endl;
    cout << "------------------------------------" << endl;
    for (hrStart = 1.0 ; hrStart <= hrEnd; hrStart += 1){
        dis = mph * hrStart;
        cout << setw(4) << hrStart << "                   "<< setw(4) << dis << endl;
        cout << "------------------------------------" << endl;
    }
};