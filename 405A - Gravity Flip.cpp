#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> myvector;
    int a,b;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> b;
        myvector.push_back(b);
    }
    sort(myvector.begin(),myvector.end());
    for(int i = 0; i < a; i++){
        cout << myvector[i] << " ";
    }
    return 0;
}
