#include <bits/stdc++.h>
using namespace std;
int main()
{
    long a,b;
    int sum,dum;
    vector <int> myvector;
    for(int i = 0; i < 3; i++){
        cin >> a;
        myvector.push_back(a);
    }
    sort(myvector.begin(),myvector.end());
    int v = myvector[0] + myvector[0] + myvector[1] + myvector[1];
    int g = myvector[0] + myvector[1] + myvector[2];
    int d = myvector[0] + myvector[0] + myvector[2] + myvector[2];
    int c = myvector[1] + myvector[1] + myvector[2] + myvector[2];
    if(myvector[0] == myvector[1] && myvector[0] == myvector[2] && myvector[1] == myvector[2]){
        cout << myvector[0] + myvector[1] + myvector[2] << endl;
    }
    else if(v > g){
    cout << g << endl;
    }
    else{
        cout << v << endl;
    }

        //cout << sum + dum << endl;
    return 0 ;
}
