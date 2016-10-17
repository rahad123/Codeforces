#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> myvector;
    int num,height,series,sum = 0;
    cin >> num >> height;
    for(int i = 1; i <= num; i++){
        scanf("%d",&series);
        myvector.push_back(series);
    }
    for(int i = 0; i < myvector.size(); i++){
        if(myvector[i] > height){
            sum = sum + 2;
        }
        else{
            sum = sum + 1;
        }
    }
    printf("%d\n",sum);
    sum = 0;
    return 0;
}
