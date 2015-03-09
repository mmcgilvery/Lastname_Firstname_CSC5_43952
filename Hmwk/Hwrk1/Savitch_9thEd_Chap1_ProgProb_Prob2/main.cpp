/* 
 *  Matthew McGilvery
 * 3-6-15
 * #2 (Programming Projects) 
 * Chapter 1 Savitch 9th Edition
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
//Declare variables
    char c; //Character to be used to display C
    //Prompt for the letter c to be used
    cout << "What letter would you like to use for Big C" << endl;
    cin >> c;
    //Output Big CS
    cout <<"****************************************************"<< endl;     
 
    cout <<     "      "<<c<<c<<c<<c<<"              "<<"      "<<c<<c<<c<< endl;               
    cout <<  "    " <<c<<"           "<<"      "<<c<<c<<c<<"             |  |" <<endl;
    cout << "   "<<c<<"            "<<"      "<<c<<c<<c<<"             |  |" <<endl;
    cout <<"  "<<c<<"             "<<"      "<<c<<c<<c<<"             |  |" <<endl;
    cout <<"  "<<c<<"             "<<"      "<<c<<c<<c<<"             |  |" <<endl;
    cout <<"  "<<c<<"             "<<"      "<<c<<c<<c<<"             |  |" <<endl;
    cout <<"  "<<c<<"             "<<"      "<<c<<c<<c<<"             |  |" <<endl;
    cout <<"  "<<c<<"                      "<<"      "<<c<<c<<c<<"    |  |" <<endl;
    cout <<"  "<<c<<"                      "<<"      "<<c<<c<<c<<"    |  |" <<endl;
    cout << "   "<<c<<"                     "<<"      "<<c<<c<<c<<"    |  |" <<endl;
    cout <<  "    " <<c<<"                    "<<"      "<<c<<c<<c<<"    |  |" <<endl;
     cout <<     "      "<<c<<c<<c<<c<<"      "<<"      "<<c<<c<<c<< endl;
     cout << "                                      0  0" <<endl;
    cout <<"****************************************************"<<endl;
    cout << "Computer Science is Cool Stuff!!!" << endl;
 return 0;  
}
    