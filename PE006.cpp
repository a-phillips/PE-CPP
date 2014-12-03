#include <iostream>
#include <iomanip> // for setprecision()
using namespace std;

int main()
{
    cout << setprecision(16);
    int lim = 0;
    cout << "Enter the limit: ";
    cin >> lim;
    double dSumOfSq=0, dSqOfSum=0;
    for (int i=1; i <= lim; i++)
    {
        dSumOfSq += (i*i);
        dSqOfSum += i;
    }
    dSqOfSum *= dSqOfSum;
    cout << "The difference is " << (dSumOfSq-dSqOfSum) << endl;
}



