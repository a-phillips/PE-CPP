#include <iostream>
#include <cstdio>
#include <ctime>
#include <math.h>
using namespace std;

bool Abundant(long lNum){
    long lSum = 1;
    long lLim = (long)(sqrt((double)lNum)+1);
    long lOtherDiv;
    for (long lDiv = 2; lDiv <= lLim; lDiv++){
        if (lNum % lDiv == 0){
            lOtherDiv = lNum/lDiv;
            lSum += lDiv;
            if (lOtherDiv != lDiv)
                lSum += lOtherDiv;
        }
    }
    return (lSum > lNum);
}

int main(){
    clock_t t0;
    t0 = clock();
    double duration;
    bool bAbCheck[28124];
    bool bAbSums[28124];
    cout << Abundant(12) << endl;
    //Set all to false
    for (long x = 0; x <=28123; x++){
        bAbCheck[x] = false;
        bAbSums[x] = false;
    }
    //Mark abundant nums as true and count them
    long lAbCount = 0;
    for (long y = 12; y <= 28123; y++){
        if (Abundant(y)){
            bAbCheck[y] = true;
            lAbCount += 1;
        }
    }
    //Make list of abundant numbers
    long lAbs[lAbCount];
    int i = 0;
    for (long z = 12; z <= 28123; z++){
        if (bAbCheck[z]){
            lAbs[i] = z;
            i += 1;
        }
    }
    //Find all sums of 2 abundant numbers and mark those as true;
    long lAb1;
    long lAb2;
    long lAbSum;
    for (long a = 0; a < lAbCount; a++){
        lAb1 = lAbs[a];
        if ((lAb1*2) <= 28123){
            for (long b = a; b < lAbCount; b++){
                lAb2 = lAbs[b];
                lAbSum = lAb1 + lAb2;
                if (lAbSum <= 28123)
                    bAbSums[lAbSum] = true;
                else
                    break;
            }
        }
    }
    long lSumNonAbSums = 0;
    for (long n = 0; n <= 28123; n++){
        if (!bAbSums[n]){
            //cout << n << endl;
            lSumNonAbSums += n;
        }
    }
    cout << lSumNonAbSums << endl;
    duration = (clock()-t0)/(double)CLOCKS_PER_SEC;
    cout << duration << " seconds" << endl;
}
