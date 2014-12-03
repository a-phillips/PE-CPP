/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/

#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

int main() {
    clock_t start;
    double duration;
    long lim;
    cout << "What is the upper limit? ";
    cin >> lim;

    bool primes[lim+1];
    long sum = 0;
    start = clock();

    for (int a = 0; a <= lim; a++){
        primes[a] = true;
    }

    for (int i = 2; i <= lim; i++){
        if (primes[i]){
            sum = sum + i;
            for (int j = (i*2); j <= lim; j = j + i){
                primes[j] = false;
            }
        }
    }

    duration = (clock()-start)/(double)CLOCKS_PER_SEC;
    cout << duration << "Seconds" << endl;
    cout << sum << endl;
}
