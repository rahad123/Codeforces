#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int a,b,sum = 0;
   ll g,c;
   char ch,vh;
   int n = 0;
   cin >> a >> g;
   for(int i = 1; i <= a; i++){
    cin >> ch >> c;
    if(ch == '+'){
        g = g + c;
    }
    else{
         g = g - c;
    }
    if( g < 0){
        g = g + c;
        n++;
    }
   }
    cout << g << " " << n << endl;

}
