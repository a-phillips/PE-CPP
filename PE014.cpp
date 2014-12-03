/*Which starting number, under one million, produces the longest Collatz chain?*/

#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

long CollatzCounter(long lNum){
    long lCount = 1;
    while (lNum != 1){
        if (lNum % 2 == 0)
            lNum /= 2;
        else
            lNum = ((lNum * 3) + 1);
        lCount += 1;
    }
    return lCount;
}

int main(){
    clock_t t0;
    double duration;
    long lMax = 0;
    long lResult;
    long lAnswer;
    long lLim;
    cout << "Enter the limit: ";
    cin >> lLim;
    t0 = clock();
    for (long lStart = 1; lStart < lLim; lStart++){
        lResult = CollatzCounter(lStart);
        if (lResult > lMax){
            lMax = lResult;
            lAnswer = lStart;
        }
    }
    cout << lAnswer << " " << lMax << endl;
    duration = (clock()-t0)/(double)CLOCKS_PER_SEC;
    cout << duration << " seconds" << endl;
}

