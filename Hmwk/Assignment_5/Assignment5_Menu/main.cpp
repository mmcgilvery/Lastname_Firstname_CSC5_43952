/* 
 * File:   main.cpp
 * Author: Matthew McGilvery
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float calcRet3 (float, float, float);
float getL (float), getW(float);
float getA(float);
float getSales (float);
float getSales2 (float);
float getSales3 (float);
float getSales4 (float);
void highest(float, float, float, float);
float getSouth (int);
float getNorth (int);
float getEast (int);
float getWest (int);
float getCent (int);
void lowest(int, int, int, int, int);
float seconds (int, float);
float kE(float);
float fahren(unsigned short);
float values(float, float, unsigned short);
float values2(float, float, unsigned short);
float save1(float, float, int);//Power Function
float save2(float, float, int);// Exp and Log Func
float save3(float, float, int);// For-Loop
float save4(float, float, int);//Recursive - Calling Itself
float save5(float= 100.0f, float = 0.08f, int=9 );//Defaulted Parameter
void  save6(float &,float,  float,  int);//Pass By Reference
void  save7(float ,float, int);//Pass By Reference
float save1(float, float, float);
//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
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
    cout<<"Type 0 to solve problem 10"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin >> choice;
    //Solve a problem that has been chosen.
    switch(choice){
            case '1':{
                float priceA, priceW, perc;
                cout << "We are going to calculate an item's markup."<< endl;
                cout << endl;
                //Output 
                cout << showpoint << setprecision(2)<< fixed;
                cout << calcRet3(priceA, priceW,perc) << " is the retail price." << endl;
    
                break;
            }
            case '2':{
                float length, width, area ;// Floats of length, area, and width, to account for possible fractional numbers
                cout << "We are going to calculate the area of a rectangle."<< endl;
                cout << endl;
                //Output 
                cout << showpoint << setprecision(2)<< fixed;
                cout << getA(area);
                break;
            }
            case '3':{
                float sales1, sales2, sales3, sales4;// Floats of length, area, and width, to account for possible fractional numbers
                cout << "We are going to calculate which division had the most sales."<< endl;
                cout << endl;
                //Output
               sales1 = getSales(sales1);
               sales2 = getSales2(sales2);
               sales3 = getSales3(sales3);
               sales4 = getSales4(sales4);
               highest(sales1, sales2, sales3, sales4);
                break;
            }
            case '4':{
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
                break;
            }
            case '5':{
                int t; // seconds 
                float g, d;// distance
                cout << "We are going to calculate the distance fallen of an object."<< endl;
                cout << endl;
                //Output
                d = seconds(t,g);
               cout << "The object has been falling for " << static_cast <float> (d) << " meters." << endl;
                break;
            }
            case '6':{
                float kE2, m, v;//Kinetic Energy, Mass, velocity
                //Output
                cout << kE(kE2) << " kg * (m^2/s^2)                          "<< m << " kg             "<< v << " m/s" << endl;
                break;
            }
            case '7':{
                unsigned short fahr;
                cout << "Celsius" << "     " << "Fahrenheit" << endl;
                for (fahr = 0; fahr <= 20; fahr++){
                    cout << showpoint << fixed << setprecision(2);
                    cout << setw(5) << left << fahren(fahr) <<  "       " << fahr << endl;
            }       
                break;
            }
            case '8':{
                float f, r; // Final balance, interest rate (annual))
                unsigned short n, k=1; //number of years
                //Input
                do {
                cout << "Input your interest rate, followed by the enter key." << endl;
                cin >> r;
                cout << "Input your desired final balance, followed by the enter key." << endl;
                cin >> f;
                cout << "Input the amount of years you'd like to money to sit, followed by the enter key." << endl;
                cin >> n;
                cout <<  showpoint << fixed << setprecision(2);
                cout << "To have $"<< f << " in your account after "<< n << " years, you must deposit $" << values(f, r, n) << endl;
                cout << endl;
                } while (k==1);
                break;
            }
            case '9':{
                float p, i;
                unsigned short t, k = 1;
                //Input
                do {
                cout << "Input the present value balance, followed by the enter key." << endl;
                cin >> p;
                cout << "Input the monthly interest rate, followed by the enter key." << endl;
                cin >> i;
                cout << "Input the number of months you'd like to money to sit, followed by the enter key." << endl;
                cin >> t;
                cout <<  showpoint << fixed << setprecision(2);
                cout << "Your account's future value is $" << values2 (p, i, t) << endl;
                cout << endl;
                } while (k==1);
                break;
            }
            case '0':{
                            //Declare Variables
                float pv = 100.0f; // Present Value in $s
                float ir = 0.08f; // Interest rate
                int nC = 9; //Number of compounding periods
                //Output the inputs
                cout << fixed << setprecision(2) << showpoint;
                cout << "Present Value = $" << pv << endl;
                cout << "Interest Rate = " << ir * 100 << "%" << endl;
                cout << "Number of Compounding Periods = " << nC << "(yrs) "<< endl;
                //Calculate the savings
                cout << "Savings Function 1 = $" << save1(pv, ir, nC) << endl;
                float nCf = nC;
                cout << "Savings Function 1 = $" << save1(pv, ir, nCf) << endl;
                cout << "Savings Function 2 = $" << save1(pv, ir, nC) << endl;
                cout << "Savings Function 3 = $" << save3(pv, ir, nC) << endl;
                cout << "Savings Function 4 = $" << save4(pv, ir, nC) << endl;
                cout << "Savings Function 5 = $" << save5(pv, ir, nC) << endl;
                cout << "Savings Function 5 = $" << save5(pv, ir) << endl;
                cout << "Savings Function 5 = $" << save5(pv) << endl;
                cout << "Savings Function 5 = $" << save5() << endl;
                float fv;
                save6 (fv, pv, ir, nC);
                cout << "Savings Function 6 = $" << fv << endl;
                save7 (pv, ir, nC);
                break;
            }
            
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}

float calcRet3 (float priceA, float priceW, float perc){
    cout << "Please enter the wholesale price of the item in the format XX.XX, followed by the enter key."<< endl;
    cin >> priceW;
    cout << "Please enter the mark up percentage, followed by the enter key."<< endl;
    cin >> perc;
    cout << "$";
    return priceA= priceW * (1+ (.01f*perc));
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
float seconds (int t, float g){
    float d;
    cout << "Enter the seconds the object has been falling, followed by the enter key."<< endl;
    cin >> t;
    g = 9.81f;
    d = .5*g*(t*t);
    if (t < 0){
        cout << "Error" << endl;
        return 0;
    }
    return d;
} 
float kE (float kE2){
    float m, v;
    cout << "Enter the mass(in kilograms) of an object, followed by the enter key."<< endl;
    cin >> m;
    cout << "Enter the velocity(in meters per second) of an object, followed by the enter key."<< endl;
    cin >> v;
    //Output
    kE2 = 0.5f * m * pow(v, 2);
    cout << "Kinetic Energy             Mass            Velocity" << endl;
    return kE2;
}
float fahren (unsigned short fahr2){
    float celsius1;
    celsius1 = 0.55555f * (fahr2 - 32);
    return celsius1;
}
float values (float f1, float r1, unsigned short n1){
    float p;
    p = f1/pow(1+(0.01f*r1),n1);
    return p;
}
float values2 (float p1, float i1, unsigned short t1){
    float f;
    f = p1 * pow((1 + i1), t1);
    return f;
}
float save1 (float p, float i, int n){
    return p*pow((1+i),n);
}
float save1 (float p, float i, float n){
    return p*pow((1+i),n);
}
float save2 (float p, float i, int n){
    return p*exp(n*log(1+i));
}
float save3 (float p, float i, int n){
for (int year = 1; year <= n; year++) p*=(1+i);
return p;
}
float save4 (float p, float i, int n){
if (n<= 0) return p; //1st return
return save4(p, i, n-1)*(1+i);//2nd return
}
float save5 (float p, float i, int n){
    return p*pow((1+i),n);
}
void save6(float &f,  float p,  float i,  int n) {f= p*pow((1+i),n);}//Pass By Reference
void save7(float p,  float i,  int n) {p= p*pow((1+i),n);}//Pass By Reference