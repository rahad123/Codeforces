#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool ck = false;
    int input;
    cin >> input;
   int arr[] = {4,7,44,47,74,77,474,747,774,477,447,444,777};
   for(int i = 0; i < 10; i++){
    if(input % arr[i] == 0){
        ck = true;
        break;
    }
    else{
        ck = false;
    }

   }
    if(ck == true){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}
