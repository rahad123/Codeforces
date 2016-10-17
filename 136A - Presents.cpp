#include<iostream>
#include<map>
using namespace std;
int main()
{
    int a,i,j,b;
    map < int , int >p;
    cin >> a;
    for(i =1; i <= a; i++)
    {
        cin >> b;
        p[b] = i;
    }
    for(i = 1; i <= a; i++)
    {
        cout << p[i] << endl;
    }
    return 0;
}
