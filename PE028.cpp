#include <iostream>
#include <cstdio>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
    double duration;
    clock_t t0;
    double lim;
    double total = 0;
    int count = 0;
    double factor = 2;
    double i = 1;
    t0 = clock();
    cout << "Enter limit: ";
    cin >> lim;
    while (i <= (lim*lim)){
        total += i;
        if (count == 4){
            count = 1;
            factor += 2;
        }
        else count += 1;
        i += factor;
    }
    cout << setprecision(16) << endl;
    cout << (clock()-t0)/(double)CLOCKS_PER_SEC << endl;
    cout << total << endl;
}
