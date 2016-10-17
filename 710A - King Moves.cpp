#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    int a,b,c,n;
    cin >> ch;
    for(int i = 0; i < ch.length(); i++){
        if(ch[0] == 'a' || ch[0] == 'h'){
            n = 2;
        }
        else{
            n = 3;
        }
        if(ch[1] == '1' || ch[1] == '8'){
            a = 2;
        }
        else{
            a = 3;
        }
    }
    cout << n * a - 1 << endl;

}
