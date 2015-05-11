/* Matthew McGilvery
 * 5 - 6 - 15
 * Linear Search of Arrays
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
//User Libraries


//Global Constants


//Function Prototypes
void filAray (int [], int);
void prntAry(int [], int, int);
void markSrt (int [], int);
int linSrch(int [], int, int);
int main (){
    //Set the ramdom number seed
    srand(static_cast<unsigned int> (time(0)));
    //Declare variables
    const int SIZE = 100;
    int array[SIZE];
    //Fill the Array
    filAray(array, SIZE);
    //Print the array
    prntAry(array, SIZE, 10);
    //
    markSrt(array, SIZE);
    int randVal=rand()%90+100;
    cout << randVal << " was found at position " << linSrch(array, SIZE, randVal) << endl;
    //Print the array
    prntAry(array, SIZE, 10);
    return 0;
}


void filAray(int a[], int n){
    for (int i = 0; i < n; i++){
        a[i] = rand()%90+10; //2 digit numbers
    }
}
void prntAry(int a[], int n, int perLine){
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
        if (i%perLine == perLine - 1) cout << endl;
    }
    cout << endl;
}
void markSrt (int a [], int n) {
    for (int pos = 0; pos < n - 1; pos++){
        for (int lst =pos+1; lst < n; lst++){
            if (a[pos] > a[lst]){
                int temp = a[pos];
                a[pos]= a[lst];
                a[lst]=temp;
            }
        }
    }
}
int linSrch(int a[], int n, int val){
 for (int i=0; i < n; i++){
     if (a[i] == val) return -1;
 }
}