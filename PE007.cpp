/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Which prime are you finding? ";
    long iLim;
    cin >> iLim;
    int aPrimes[iLim*100];
    long iPrimeCount = 0;
    for (long i=2; i < (iLim*100); i++)
    {
        if (aPrimes[i] != 1)
        {
            iPrimeCount += 1;
            if (iPrimeCount == iLim)
            {
                cout << "The prime is " << i << endl;
                break;
            }
            for (long j=(2*i); j < (iLim*100); j += i)
            {
                aPrimes[j] = 1;
            }
        }
    }
    cout << "End without finding, found" << iPrimeCount << endl;
}


