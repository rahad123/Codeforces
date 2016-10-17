#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
    bool ck = false;
    int n;
    string ch;
    getline(cin,ch);
    for(int i = 0; i < ch.length(); i++){
        if(ch[i] == 'H' || ch[i] == 'Q' || ch[i] == '9')
        {
            //printf("YES\n");
            ck = true;
            //break;
        }

    }
    if(ck == true)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }



    return 0;
}
