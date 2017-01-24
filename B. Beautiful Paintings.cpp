#include<bits/stdc++.h>
using namespace std;
const int maxn = 1200;
int vis[maxn];
int a[maxn];
vector <int> tmp;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
        scanf("%d",&a[i]);
    sort(a+1 , a+1+n);
    //sort(a,a + n);
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])continue;
        tmp.push_back(a[i]);
        int now = a[i];
        for(int j=i+1;j<=n;j++)
        {
            if(vis[j])continue;
            if(now>=a[j])continue;
            now=a[j];
            vis[j]=1;
            tmp.push_back(a[j]);
        }
    }
    for(int i=0;i<tmp.size()-1;i++)
        if(tmp[i+1]>tmp[i])ans++;
    cout<<ans<<endl;
}
