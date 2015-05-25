/* Matthew McGilvery
 * 5 - 6 - 15
 * Linear Search of Arrays
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void filAray(int [], int [], int);
void prntAry(int [], int [], int, int);
void prntAry(int [], int, int);
int linSrch(int[], int, int);
void markSrt(int [], int[], int);

//Execution Begins Here!

int main(int argc, char** argv)
    {
    //Set the random number seed
    srand(static_cast<unsigned int> (time(0)));
    //Declare variables
    const int SIZE = 100;
    int array[SIZE];
    int index[SIZE];
    //Fill the array
    filAray(array, index, SIZE);
    //Print the array
    cout << "The original unsorted array" << endl;
    prntAry(array, SIZE, 10);
    cout << "The original unsorted index array" << endl;
    prntAry(index, SIZE, 10);
    //Sort the Array
    markSrt(array, index, SIZE);
    //Print 
    cout << "The original array after sorting" << endl;
    prntAry(array, SIZE, 10);
    cout << "The sorted index array" << endl;
    prntAry(index, SIZE, 10);
    cout << "The original unsorted array using the sorted index" << endl;
    prntAry(array, index, SIZE, 10);
    //Find something
    int rndVal = rand() % 90 + 10;
    cout << rndVal << " was found at position "
            << linSrch(array, SIZE, rndVal) << endl;
    //Exit Stage Right!
    return 0;
    }

int linSrch(int a[], int n, int val)
    {
    for (int i = 0; i < n; i++)
        {
        if (a[i] == val)return i;
        }
    return -1;
    }

void markSrt(int a[], int indx[], int n)
    {
    for (int pos = 0; pos < n - 1; pos++)
        {
        for (int lst = pos + 1; lst < n; lst++)
            {
            if (a[indx[pos]] > a[indx[lst]])
                {
                int temp = indx[pos];
                indx[pos] = indx[lst];
                indx[lst] = temp;
                }
            }
        }
    }

void prntAry(int a[], int n, int perLine)
    {
    cout << endl;
    for (int i = 0; i < n; i++)
        {
        cout << a[i] << " ";
        if (i % perLine == perLine - 1)cout << endl;
        }
    cout << endl;
    }

void prntAry(int a[], int indx[], int n, int perLine)
    {
    cout << endl;
    for (int i = 0; i < n; i++)
        {
        cout << a[indx[i]] << " ";
        if (i % perLine == perLine - 1)cout << endl;
        }
    cout << endl;
    }

void filAray(int a[], int indx[], int n)
    {
    for (int i = 0; i < n; i++)
        {
        a[i] = rand() % 90 + 10; //2 digit numbers
        indx[i] = i;
        }
    }