#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string ch[] ={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    int n,b;
    cin >> n;
    while(n > 5)
    {
        n = n / 2 - 2;
    }
    cout << ch[n - 1] << endl;
    return 0;
}
