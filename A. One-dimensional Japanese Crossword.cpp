#include <bits/stdc++.h>
using namespace std;

int main() {
    // insert code here...

    int length, total, current=-1;
    vector <int> individualSize;
    string line;

    cin >> length;
    cin >> line;

    for(int i = 0;i < length;i++){



        if(line[i] == 'B'){
            total++;
            individualSize.push_back(0);
            current++;
        }


        while(line[i ]== 'B'){
            individualSize[current]++;
            i++;
            if(i >= length){
                break;
            }
        }
    }

    cout << total << endl;

    for(int i = 0; i < individualSize.size(); i++){
        cout << individualSize[i];
        if(i < individualSize.size()-1){
            cout << " ";
        }
    }


    return 0;
}
