#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n = 0,m = 0;
    string ch;
    cin >> ch;
    for(int i = 0; i < ch.length(); i++){
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            n++;
        }
        else{
            m++;
        }
    }
    //cout << n << " " << m << endl;
    for(int i = 0; i < ch.length(); i++){
     if(n > m){
            ch[i] = tolower(ch[i]);
            cout << ch[i];
            //break;
        }
        else if(n < m){
            ch[i] = toupper(ch[i]);
            cout << ch[i];
            //break;
        }
        else{
            ch[i] = tolower(ch[i]);
            cout << ch[i];
            //break;
        }
    }
    return 0;
}
