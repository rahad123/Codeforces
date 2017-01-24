#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool ck = true;
    long long n = 0,v = 1,a;
    string ch;
    int T;
    scanf("%d",&T);
    while(T--){
    cin >> ch >> a;
    sort(ch.begin(),ch.end());
    do{
        n++;
        if(n == a){
            cout << "Case " << v << ": " <<  ch << endl;
            v++;
            ck = true;
            break;
        }
        else{
            ck = false;
        }

    }
    while(next_permutation(ch.begin(),ch.end()));
    n = 0;
    if(ck == false){
        cout << "Case " << v << ": " <<"Impossible" << endl;
        v++;
    }
    }
    return 0;
}
