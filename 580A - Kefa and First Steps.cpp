#include <bits/stdc++.h>
using namespace std;
int main()
{
 int num;
 int a,b;
 cin >> num;
 if(num > 0){
    cout << num << endl;
 }
 else{
    a = num / 10;
    b = num / 100 * 10 + num % 10;
    //cout << a << " " << b << endl;
    cout << max(a,b) << endl;
 }

    return 0;
}
