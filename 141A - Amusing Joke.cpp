#include<stdio.h>
#include<math.h>
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,n = 0,k;
    string ch,bh,v,th;
    cin >> ch >> bh >> th;
    v = ch + bh;
    sort(v.begin(),v.end());
    //cout << v << endl;
    sort(th.begin(),th.end());
    //cout << th << endl;
    for(j = 0; j < th.length(); j++);
    for(k = 0; k < v.length(); k++);
    //cout << j << " " << k << endl;
    for(i = 0; i < v.length() && th.length(); i++)
    {
        if(th[i] == v[i])
        {
            n++;

        }
    }
    if(j == n && n == k)
    {
        cout << "YES" << endl;
    }
     else
        {
            cout << "NO" << endl;
            //break;
        }

}
