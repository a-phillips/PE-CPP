/*If p is the perimeter of a right angle triangle with integral length sides, {a,b,c}, there are exactly three solutions for p = 120.

{20,48,52}, {24,45,51}, {30,40,50}

For which value of p ≤ 1000, is the number of solutions maximised?*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int iMax = 0;
    int iCount;
    int c;
    for (int p = 10; p <= 1000; p++){
        iCount = 0;
        for (int a = 1; a <= p; a++){
            //cout << a << " " << pow(a, 2) << endl;
            for (int b = a; b <= p; b++){
                c = p - b - a;
                if (b >= c)
                    break;
                /*if (c == 5 && b == 4 && a == 3)
                    cout << ((pow(a,2)+pow(b,2)) == pow(c,2)) << endl;*/
                if ((pow(a,2)+pow(b,2)) == pow(c,2)){
                   /* cout << "Found: " << pow(a,2) << " " << pow(b,2) << " " << pow(c,2) << endl;*/
                    iCount += 1;
                }
            }
        }
        if (iCount > iMax){
            cout << p << " " << iCount << endl;
            iMax = iCount;
        }
    }
}
