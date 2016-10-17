#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n = 0,m = 0;
    cin >> a;
    for(int i = 1; i <= a; i++){
        cin >> b >> c;
        if((b >= 1 && b <= 6) && (c >= 1 && c <= 6)){
        if(b > c){
            n++;
        }
        else if(b < c){
            m++;
        }
        else{
            continue;
        }

    }
    }
    if(n > m){
        cout << "Mishka" << endl;
    }
    else if(n < m){
        cout << "Chris" << endl;
    }
    else{
        cout << "Friendship is magic!^^" << endl;
    }
}
