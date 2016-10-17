#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cstdio>
using namespace std;
int main()
{
    int a,b,i,n = 0,m = 0;
    cin >> a;
    b = a % 5;
    if(b > 0)
    {
        n++;
    }
    for(i = 1; i <= a; i++)
    {
        if(i % 5 == 0)
        {
            m++;
        }

    }
    cout << n + m << endl;

    return 0;
}
