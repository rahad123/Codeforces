#include <bits/stdc++.h>
using namespace std;
int main()
{
   bool ck = false;
     int n;
     long long num;
     scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%I64d",&num);
        double v = sqrt(num);
        int g = int(v);
        if(v == 1){
            cout << "NO\n";
            continue;
        }
        if(v == 2){
            cout << "YES\n";
            continue;
        }
        if(g == v){
            for(int j = 2; j < g; j++){
                if(g % j == 0){
                    ck = false;
                    break;
                }
                else{
                    ck = true;
                }
            }
        }
        else{
            cout << "NO\n";
            continue;
        }
       if(ck){
        cout << "YES\n";
        continue;
       }
       else{
        cout << "NO\n";
        continue;
       }

      }

    return 0;
}


