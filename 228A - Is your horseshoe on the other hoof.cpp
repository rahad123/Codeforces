#include <bits/stdc++.h>
using namespace std;
int main()
{
 long long int a;
 int b,n = 0;
 vector <int> myvector;
 for(int i = 0; i < 4; i++){
    cin >> a;
    myvector.push_back(a);
 }
 sort(myvector.begin(),myvector.end());
 for(int i = 0; i < 4; i++){
    if(myvector[i] == myvector[i + 1]){
        n++;
    }
 }
 cout << n << endl;
    return 0;
}
