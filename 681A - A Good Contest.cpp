#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;
int main()
{
  bool bk = false;
  int n = 0,m = 0;
  string ch;
  int a,b;
  int v;
  cin >> v;
  for(int i = 1; i <= v ; i++){
    cin >> ch >> a >> b;
    if(a >= 2400 && b > a){
        n++;
    }
    else{
       m++;
    }
  }
  if(n >= 1){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
    return 0;
}
