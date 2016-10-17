#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    vector <int> myvector;
    for(int i = 0; i < 3; i++){
        cin >> a;
        myvector.push_back(a);
    }
    sort(myvector.begin(),myvector.end());
    int v = myvector[0] - myvector[1];
    int g = myvector[1] - myvector[2];
    cout << abs(v + g) << endl;

        return 0;
}
