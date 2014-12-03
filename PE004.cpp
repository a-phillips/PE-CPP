/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/

#include <iostream>
#include <math.h>
using namespace std;

int NumDigits(long x)
{
    int n = 0;
    int lCheck = x % ((int)pow(10, n));
    while (lCheck != x)
    {
        n += 1;
        lCheck = x % ((int)pow(10, n));
    }
    return n;
}

bool Palindrome(long x)
{
    int nDigits = NumDigits(x);
    int xDigits[nDigits];
    int i = 0;
    int temp_x = x;
    while (temp_x > 0)
    {
        xDigits[i] = temp_x % 10;
        temp_x /= 10;
        i += 1;
    }
    int x_rev = 0;
    for (i = 0; i < nDigits; i++)
    {
        x_rev += (xDigits[i]*(pow(10,(nDigits-i-1))));
    }
    if (x_rev == x)
        return true;
    else
        return false;
}

bool CheckDivs(long x)
{
    for (int i=1000; i <= 9999; i++)
    {
        if (x%i==0 && x/i > 1000 && x/i <= 9999)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    for (int i = (9999*9999); i > (1000*1000); i--)
    {
        if (Palindrome(i) && CheckDivs(i))
        {
            cout << i << endl;
            break;
        }
    }
}
