#include <iostream>
#include <cstdio>
#include <ctime>
#include <math.h>
using namespace std;


int DivSum(int iNum){
    int iSum = 1;
    int iLim = (int)(sqrt((double)iNum)+1);
    int iOtherDiv;
    for (int iDiv = 2; iDiv <= iLim; iDiv++){
        if (iNum % iDiv == 0){
            iOtherDiv = iNum/iDiv;
            iSum += iDiv;
            if (iOtherDiv != iDiv)
                iSum += iOtherDiv;
        }
    }
    return iSum;
}

int main(){
    clock_t t0;
    double duration;
    int iDivSums[10001];
    long lTotalSum = 0;
    int y;
    int z;
    cout << DivSum(35) << endl;
    cout << DivSum(9) << endl;
    cout << DivSum(25) << endl;
    for (int i=2; i <= 10000; i++){
        iDivSums[i] = DivSum(i);
    }
    for (int x=3; x <= 10000; x++){
        y = iDivSums[x];
        if (y <= 10000)
            z = iDivSums[y];
        if (x == z && x != y){
            lTotalSum += x;
            cout << x << endl;
        }
    }
    cout << lTotalSum << endl;
    duration = (clock()-t0)/(double)CLOCKS_PER_SEC;
    cout << duration << " seconds" << endl;
}

