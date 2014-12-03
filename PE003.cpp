/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/

#include <iostream>

using namespace std;

long LargestPrimeFactor(long num)
{
    long lPrimeDiv = 2;
    while (num > 1)
    {
        while (num % lPrimeDiv == 0)
        {
            num /= lPrimeDiv;
        }
        lPrimeDiv += 1;
    }
    return (lPrimeDiv - 1);
}

int main()
{
    cout << "Enter a number: ";
    long x;
    cin >> x;
    cout << LargestPrimeFactor(x) << endl;
}

