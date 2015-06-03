/* Matthew McGilvery
 * 6/1/15
 * 2D Dynamic Arrays
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Function Prototypes
int **filAray(int, int);
void prntAry(int **, int, int);
void destroy(int **, int);

//Execution Begins Here

int main(int argc, char** argv)
    {
    //Create the array
    int rows = 19, cols = 19;
    int **array = filAray(rows, cols);
    //Print the array
    prntAry(array, rows, cols);
    //Deallocate the array
    destroy(array, rows);
    //Exit stage right
    return 0;
    }

void destroy(int **a, int r)
    {
    //Loop and destroy the columns
    for (int i = 0; i < r; i++)
        {
        delete [] a[i];
        //Destroy the rows
        delete []a;
        }
    }

void prntAry(int **a, int r, int c)
    {
    //Print the headings
    cout << "THIS IS YOUR MULTIPLICATION TABLE!!!" << endl;
    cout << endl << setw(8) << 0;
    for (int i = 1; i < c; i++)
        {
        cout << setw(4) << i;
        }
    cout << endl;
    //Print the array
    for (int i = 0; i < r; i++)
        {
        cout << setw(4) << i;
        for (int j = 0; j < c; j++)
            {
            cout << setw(4) << a[i][j];
            }
        cout << endl;
        }
    }

int **filAray(int row, int col)
    {
    //Create the number of rows
    int **array = new int*[row];
    //Loop and create the columns
    for (int i = 0; i < row; i++)
        {
        array[i] = new int[col];
        }
    //Fill the array
    for (int i = 0; i < row; i++)
        {
        for (int j = 0; j < col; j++)
            {
            array[i][j] = i*j;
            }
        }
    //Return the array
    return array;
    }
