#include <bits/stdc++.h>
using namespace std;
int main()
{
  bool ck = false;;
  string ch[1005];
  int a,b,c;
  cin >> a;
  for(int i = 0; i < a; i++){
    cin >> ch[i];
  }
    for(int j = 0; j < a; j++){
        if(ch[j][0] == 'O' && ch[j][1] == 'O'){
            ch[j][0] = '+';
            ch[j][1] = '+';
            ck = true;
            break;
        }
        else if(ch[j][3] == 'O' && ch[j][4] == 'O'){
            ch[j][3] = '+';
            ch[j][4] = '+';
            ck = true;
            break;
        }
    }
  if(ck == true){
        cout << "YES" << endl;
    for(int i = 0; i < a; i++){
        cout << ch[i] << endl;
    }
  }
  else{
    cout << "NO" << endl;
  }
   return 0;
}
