/*The sequence of triangle numbers is generated by adding the natural numbers.
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?*/

#include <iostream>
#include <cstdio>
#include <ctime>
#include <math.h>
using namespace std;

int GetNumDivs(long lNum){
    int iDivs = 0;
    long iLim = ((long)sqrt((double)lNum)+1);
    for (long i = 1; i < iLim; i++){
        if (lNum % i == 0){
            iDivs = iDivs + 2;
            if ((i^2) == lNum){
                iDivs = iDivs - 1;
            }
        }
    }
    return iDivs;
}


int main(){
    clock_t t0;
    double duration;
    long lTriNum = 0;
    long lAdd = 1;
    bool bFound = false;
    int iLim;
    cout << "Enter the limit: ";
    cin >> iLim;
    t0 = clock();
    while (!bFound){
        lTriNum = lTriNum + lAdd;
        if (GetNumDivs(lTriNum) > iLim){
            cout << lTriNum << endl;
            bFound = true;
        }
        lAdd = lAdd + 1;
    }
    duration = (clock()-t0)/(double)CLOCKS_PER_SEC;
    cout << duration << " seconds" << endl;
}
