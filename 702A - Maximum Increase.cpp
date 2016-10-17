#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 vector <int> myvector;
 int a,n = 1,count = 0;
 long long b;
 cin >> a;
 for(int i = 0; i < a; i++){
    cin >> b;
    myvector.push_back(b);
 }
 for(int i = 0; i < a - 1; i++){
    if(myvector[i] < myvector[i + 1]){
        n++;
    }
    else{
        n = 1;
    }
    if(n > count){
        count = n;
    }
 }
 if(a == 1){
    cout << "1" << endl;
 }
 else{
    cout << count << endl;
 }
     return 0;
}
