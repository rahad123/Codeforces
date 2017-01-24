#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0,dum = 0;
    char ch[8][8];
    //cin >> ch;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> ch[i][j];
            if(ch[i][j] == 'Q' || ch[i][j] == 'R' || ch[i][j] == 'B' || ch[i][j] == 'N' || ch[i][j] == 'P' || ch[i][j] == 'K'){
            if(ch[i][j] == 'Q'){
                sum = sum + 9;
            }
            if(ch[i][j] == 'R'){
                sum = sum + 5;
            }
            if(ch[i][j] == 'B'){
                sum = sum + 3;
            }
            if(ch[i][j] == 'N'){
                sum = sum + 3;
            }
            if(ch[i][j] == 'P'){
                sum = sum + 1;
            }
    }
    else if(ch[i][j] == 'q' || ch[i][j] == 'r' || ch[i][j] == 'b' || ch[i][j] == 'n' || ch[i][j] == 'p' || ch[i][j] == 'k'){
            if(ch[i][j] == 'q'){
                dum = dum + 9;
            }
            if(ch[i][j] == 'r'){
                dum = dum + 5;
            }
            if(ch[i][j] == 'b'){
                dum = dum + 3;
            }
            if(ch[i][j] == 'n'){
                dum = dum + 3;
            }
            if(ch[i][j] == 'p'){
                dum = dum + 1;
            }
    }
    }
    //cout << sum << " " << dum << endl;
    }
    if(sum > dum){
        cout << "White" << endl;
    }
    else if(sum < dum){
        cout << "Black" << endl;
    }
    else{
        cout << "Draw" << endl;
    }
}
