#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,cnt = 0;
    string ch;
    cin >> num;
    cin >> ch;
    for(int i = 0; i < ch.length(); i++){
        if(ch[i] == '<'){
            cnt++;
        }
        else{
            break;
        }

    }
   // int v = ch.length();
    for(int i = ch.length() - 1; i >= 0; i--){
        if(ch[i] == '>'){
            cnt++;
        }
        else{
            break;
        }
    }
    cout << cnt << endl;
}

