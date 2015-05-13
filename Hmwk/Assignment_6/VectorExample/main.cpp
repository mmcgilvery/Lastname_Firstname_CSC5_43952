/* Matthew McGilvery
 * 5 - 11 - 15
 * Vector Example
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <bitset>

using namespace std;
//User Libraries


//Global Constants


//Function Prototypes
void filAray (vector <int> &, int);
void prntAry (vector <int> &, int, int);
void markSrt (vector<int> &, int);
int linSrch (vector <int> &, int, int);
int main (){
    //Set the random number seed
    srand(static_cast<unsigned int> (time(0)));
    //Declare variables
    const int SIZE = 100;
    vector<int> array(SIZE);
    //Fill the array
    filAray(array, SIZE);
    //Print the array
    prntAry(array, SIZE, 10);
    //Sort the Array
    //markSrt(array,SIZE);
    sort(array.begin(), array.end());
    //Print the array
    prntAry(array, SIZE, 10);
    //Find something
    int rndVal = rand() % 90 + 10;
    std:: vector <int> :: iterator it;
    it = find(array.begin(), array.end(), rndVal);
    if (it == array.end()){
        cout << rndVal << " is not found." << endl;
    }
    else {
        cout << rndVal << " is not found." << endl;
    }
    //cout << rndVal << " was found at position " << linSrch(array, SIZE, rndVal) << endl;
    //Exit stage Right!
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
void markSrt(vector<int> &a,int n){
    for(int pos=0;pos<n-1;pos++){
        for(int lst=pos+1;lst<n;lst++){
            if(a[pos]>a[lst]){
                int temp=a[pos];
                a[pos]=a[lst];
                a[lst]=temp;
            }
        }
    }
}
int linSrch(int a[], int n, int val){ //
    for (int i=0; i < n; i++){
        if (a[i] == val) return -1;
    }
    return -1;
}