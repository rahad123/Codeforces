#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    long long num,a,b;
    scanf("%lld%lld%lld",&num,&a,&b);
    bool flag=false;
    for(long long i=num;i<=b;i+=a){
        if(b!=(num+1) && (b==i+1 || b==i )){
            flag=true;
            break;
        }
    }
    if(flag)printf("YES\n");
    else printf("NO\n");

    return 0;
}
