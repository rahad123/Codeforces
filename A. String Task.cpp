#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ch,c;
    cin >> ch;
    for(int i = 0; i < ch.length(); i++){
        if(ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' || ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'u' || ch[i] == 'U' || ch[i] == 'y' || ch[i] == 'Y'){
            continue;
        }
        else{
            c = tolower(ch[i]);
            cout << "." << c;
        }
    }
    return 0;
}
