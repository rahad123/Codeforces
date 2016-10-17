#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector <long long int> myvector;
   long long int a,b,c,n = 1;
   cin >> a >> b;
   for(int i = 0; i < a; i++){
    cin >> c;
    myvector.push_back(c);
   }
   for(int i = 0; i < a - 1; i++){
    if(myvector[i + 1] - myvector[i] <= b){
        n++;
    }
    else{
        n = 1;
    }
   }
   cout << n << endl;
    return 0;
}
