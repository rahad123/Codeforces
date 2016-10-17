#include <bits/stdc++.h>
using namespace std;
int main()
{
  string ch,bh;
  cin >> ch >> bh;
  //int g = strlen(ch);
  //int v = strlen(bh);
  //int d = max(g,v);
  for(int i = 0; i < ch.length(); i++){
    if(ch[i] != bh[i]){
        cout << "1";
    }
    else{
        cout << "0";
    }
  }
    return 0;
}
