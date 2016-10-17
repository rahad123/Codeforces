#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,sum = 0;
    vector <int>myvector;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> b;
        myvector.push_back(b);
    }
    for(int i = 0; i < a; i++){
        sum = sum + myvector[i];
    }
    double v = sum / a;
    cout << fixed << setprecision(12);
    cout << v << endl;
    return 0;
}
