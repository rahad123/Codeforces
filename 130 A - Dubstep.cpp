#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v = 0,flag = 0;
    string ch;
    cin >> ch;
    for(int i = 0; i < ch.length();){
        if(ch[i] == 'W' && ch[i + 1] == 'U' && ch[i + 2] == 'B'){
            if(flag == 1){
                cout << " ";
                flag++;
            }
            else{
            i = i + 3;
            continue;}
            //flag++;
        }
        else{
            cout << ch[i];
            i++;
            flag = 1;
        }

    }
    return 0;
}
