#include <bits/stdc++.h>
using namespace std;

int main()
{

   int a,b,n;
   string hate = "that I hate " , love = "that I love ";
   cin >> n;
   string res = "I hate ";
   for(int i = 1; i < n; i++){
    if(i % 2 == 0){
        res = res + hate;
    }
    else{
        res = res + love;
    }
   }
   res = res + "it";
   cout << res << endl;
    return 0;
}
