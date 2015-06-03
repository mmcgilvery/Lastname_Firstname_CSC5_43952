/* Matthew McGilvery
 * 6/3/15
 * 2D Dynamic Arrays With Structure
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
#include <table.h>


//Global Constants
//Function Prototypes
table **filAray(int, int);
void prntAry(const table *);
void destroy(const table *);

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

void destroy(table *a)
    {
    //Loop and destroy the columns
    for (int i = 0; i < a -> rows; i++)
        {
        delete [] a-> data[i];
        
        //Destroy the rows
        delete []a;
        }
    }

void prntAry(table *a)
    {
    //Print the headings
    cout << "THIS IS YOUR MULTIPLICATION TABLE!!!" << endl;
    cout << endl << setw(8) << 0;
    for (int i = 1; i < a -> cols; i++)
        {
        cout << setw(4) << i;
        }
    cout << endl;
    //Print the array
    for (int i = 0; i < a -> rows; i++)
        {
        cout << setw(4) << i;
        for (int j = 0; j < a -> cols; j++)
            {
            cout << setw(4) << a-> data[i][j];
            }
        cout << endl;
        }
    }

table *filAray(int row, int col)
    {
    //Allocate the table
    table *table = new table;
    table -> cols= col;
    table -> rows = row;
    //Create the number of rows
    table -> data = new int*[table -> rows];
    //Loop and create the columns
    for (int i = 0; i < table -> rows; i++)
        {
        table -> data  = new int[table -> cols];
        }
    //Fill the array
    for (int i = 0; i < table -> rows; i++)
        {
        for (int j = 0; j < table -> cols; j++)
            {
            array[i][j] = i*j;
            }
        }
    //Return the array
    return array;
    }
