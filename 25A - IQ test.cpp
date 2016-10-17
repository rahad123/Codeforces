#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
   int i,a,b,n = 0,m = 0;
   int arr[100],odd,even;
   cin >> a;
   for(i = 0; i < a; i++)
   {
       cin >> arr[i];
   }
   for(i = 0; i < a; i++)
   {
       if(arr[i] % 2 == 0)
       {
           n++;
           even = i + 1;
       }
       if(arr[i] % 2 != 0)
       {
           m++;
           odd = i + 1;
       }
   }
   if(n > m)
   {
       cout << odd << endl;
   }
   else
   {
       cout << even << endl;
   }
    return 0;
}
