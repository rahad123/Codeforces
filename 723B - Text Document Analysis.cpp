#include <bits/stdc++.h>
using namespace std;

int main() {
 int n,lw = 0,nw = 0;
 string str;
 cin >> n;
 cin >> str;
 int len = str.length(),cnt = 0;

 bool cp = false;
 for(int i = 0; i < len; i++){
  if(str[i] != '_' && str[i] != '(' && str[i] != ')' && cp == false){
   cnt++;
  }
  if(str[i] == '_' || str[i] == '(' || str[i] == ')' && cp == false){
   if(lw < cnt)lw = cnt;
   cnt = 0;
  }
  if(str[i] == '(')cp=true;
  if(str[i] == ')')cp = false;
 }
 if(lw < cnt)lw = cnt;
 cnt = 0;
 for(int i = 0; i < len; i++){
  if(str[i] == '('){
   int j;
   for(j = i; str[j] != ')'; j++){
    if((str[j] == '_' || str[j] == '(') && (str[j+1] >= 'A' && str[j+1] <= 'Z' || str[j+1] >= 'a' && str[j+1] <= 'z'))nw++;
   }
   i=j;
  }

 }
 cout << lw << " " << nw << endl;
 return 0;
}
