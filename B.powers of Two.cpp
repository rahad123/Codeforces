#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int main()
{
    int sum,div,v = 0;
   vector <int> myvector;
   int a,b;
   cin >> a;
   for(int i = 0; i < a; i++){
    cin >> b;
    myvector.push_back(b);
   }
   for(int i = 0; i < a; i++){
    for(int j = i + 1; j < a; j++){
        sum = myvector[i] + myvector[j];
        arr[v] = sum;
        v++;
        }
    }
    int n = 0;
    for(int i = 0; i < v; i++){
        //cout << arr[i] << endl;
        if(arr[i] % 2 == 1){
            continue;
        }
        else{
            div = arr[i] / 2;
            if(div == 1){
                n++;
            }
            if(div % 2 == 0){
                n++;
            }
        }

    }
    cout << n << endl;
    return 0;
}
