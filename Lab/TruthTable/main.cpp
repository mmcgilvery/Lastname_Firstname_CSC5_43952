/*
Matthew McGilvery
 3-17-15
 Determine if Table created in class agrees with
*/
//System Library
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution begins here

int main(int argc, const char * argv[]) {
    //Declare variables
    bool x , y;
    //Heading
    cout <<"X Y  !X  !Y  X&&Y  X||Y  X^Y  X^Y^Y  X^Y^X "
    <<"!(X&&Y)  !X||!Y  !(X||Y)  !X&&!Y " << endl;
    //Output the first row of the table
    x= true; y = true;
    cout << (x? 'T': 'F')<<"  ";
    cout << (y? 'T': 'F')<<"  ";
    cout << (!x? 'T': 'F')<<"  ";
    cout << (!y? 'T': 'F')<<"   ";
    cout << (x&&y? 'T': 'F')<<"     ";
    cout << (x||y? 'T': 'F')<<"     ";
    cout << (x^y? 'T': 'F')<<"    ";
    cout << (x^y^y? 'T': 'F')<<"      ";
    cout << (x^y^x? 'T': 'F')<<"      ";
    cout << (!(x&&y)? 'T': 'F')<<"       ";
    cout << (!x||!y? 'T': 'F')<<"        ";
    cout << (!(x||y)? 'T': 'F')<<"       ";
    cout << (!x&&!y? 'T': 'F')<<"       ";
    cout << endl;
    y = false;
    cout << (x? 'T': 'F')<<"  ";
    cout << (y? 'T': 'F')<<"  ";
    cout << (!x? 'T': 'F')<<"  ";
    cout << (!y? 'T': 'F')<<"   ";
    cout << (x&&y? 'T': 'F')<<"     ";
    cout << (x||y? 'T': 'F')<<"     ";
    cout << (x^y? 'T': 'F')<<"    ";
    cout << (x^y^y? 'T': 'F')<<"      ";
    cout << (x^y^x? 'T': 'F')<<"      ";
    cout << (!(x&&y)? 'T': 'F')<<"       ";
    cout << (!x||!y? 'T': 'F')<<"        ";
    cout << (!(x||y)? 'T': 'F')<<"       ";
    cout << (!x&&!y? 'T': 'F')<<"       ";
    cout << endl;
    x= false; y = true;
    cout << (x? 'T': 'F')<<"  ";
    cout << (y? 'T': 'F')<<"  ";
    cout << (!x? 'T': 'F')<<"  ";
    cout << (!y? 'T': 'F')<<"   ";
    cout << (x&&y? 'T': 'F')<<"     ";
    cout << (x||y? 'T': 'F')<<"     ";
    cout << (x^y? 'T': 'F')<<"    ";
    cout << (x^y^y? 'T': 'F')<<"      ";
    cout << (x^y^x? 'T': 'F')<<"      ";
    cout << (!(x&&y)? 'T': 'F')<<"       ";
    cout << (!x||!y? 'T': 'F')<<"        ";
    cout << (!(x||y)? 'T': 'F')<<"       ";
    cout << (!x&&!y? 'T': 'F')<<"       ";
    cout << endl;
    x= false; y = false;
    cout << (x? 'T': 'F')<<"  ";
    cout << (y? 'T': 'F')<<"  ";
    cout << (!x? 'T': 'F')<<"  ";
    cout << (!y? 'T': 'F')<<"   ";
    cout << (x&&y? 'T': 'F')<<"     ";
    cout << (x||y? 'T': 'F')<<"     ";
    cout << (x^y? 'T': 'F')<<"    ";
    cout << (x^y^y? 'T': 'F')<<"      ";
    cout << (x^y^x? 'T': 'F')<<"      ";
    cout << (!(x&&y)? 'T': 'F')<<"       ";
    cout << (!x||!y? 'T': 'F')<<"        ";
    cout << (!(x||y)? 'T': 'F')<<"       ";
    cout << (!x&&!y? 'T': 'F')<<"           ";
    cout << endl;
    
    
    //Exit Stage right!
    

    
    
    
    return 0;
}
