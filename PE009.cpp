#include <iostream>
using namespace std;

int main()
{
    long a, b, c;
    for (a=1; a<1000; a++)
    {
        for (b=a; b<1000; b++)
        {
            c = 1000 - a - b;
            if (c < b)
                break;
            if ((a*a)+(b*b) == (c*c))
                cout << a*b*c;
        }
    }
}


