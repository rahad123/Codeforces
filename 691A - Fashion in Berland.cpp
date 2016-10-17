#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> myvector;
	int a,b,m = 0,n = 0;
	cin >> a;
	for(int i = 1; i <= a; i++){
        cin >> b;
        myvector.push_back(b);
	}
	for(int i = 0; i < a; i++){
        if(a == 1){
            n++;
        }
        if(myvector[i] == 0){
            n++;
        }
        else{
            m++;
        }
	}
	if(n == 1 && m >= 1){
        printf("YES\n");
	}
	else if(myvector[0] == 0){
        printf("NO\n");
	}
	else{
        printf("NO\n");
	}

}
