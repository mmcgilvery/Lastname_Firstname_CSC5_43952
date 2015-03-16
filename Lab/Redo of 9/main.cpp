/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 16, 2015, 10:48 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int posSum=0, negSum=0, sum=0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    
    cout << "Enter 10 whole #s, separated by hitting enter/reurn" << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;
    
    if (n1>0) {
        posSum+= n1;
    }
    else {
        negSum+= n1;
    }
    if (n2>0) {
        posSum+= n2;
    }
    else {
        negSum+= n2;
    }
    if (n3>0) {
        posSum+= n3;
    }
    else {
        negSum+= n3;
    }
    if (n4>0) {
        posSum+= n4;
    }
    else {
        negSum+= n4;
    }
    
    return 0;
}

