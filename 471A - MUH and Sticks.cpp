#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define pf printf
#define sf scanf
#define size 10
int a[size];

int main()
{
    int i;
    for(i=0; i<6; i++)
    {
        sf("%d", &a[i]);
    }
    sort(a, a+6);
    i=0;

    if((a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i+4]==a[i+5])||
    (a[i]==a[i+1] && a[i+2]==a[i+3] && a[i+2]==a[i+4] && a[i+2]==a[i+5])||
    (a[i+1]==a[i+2] && a[i+1]==a[i+3] && a[i+1]==a[i+4] && a[i]==a[i+5]))
    {
        pf("Elephant\n");
    }

    else if((a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i+4]<a[i+5])||
    (a[i]<a[i+1] && a[i+2]==a[i+3] && a[i+2]==a[i+4] && a[i+2]==a[i+5]) ||
    (a[i+1]==a[i+2] && a[i+1]==a[i+3] && a[i+1]==a[i+4] && a[i]<a[i+5]))
    {
        pf("Bear\n");
    }

    else
    {
        pf("Alien\n");
    }
    return 0;
}
