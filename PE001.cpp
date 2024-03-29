/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/

#include <iostream>

using namespace std;


int main()
{
    const int lim = 1000;
    long sum = 0;
    for (int i=2; i < lim; i++)
    {
        sum += ((i%3==0 || i%5==0)?i:0);
    }
    cout << sum << endl;
}

