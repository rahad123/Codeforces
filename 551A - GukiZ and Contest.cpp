#include <iostream>
#include <algorithm>
using namespace std;
 int arr[2000];
int main()
{
    int a,count = 0;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(arr[i] < arr[j])
            {
                count++;
            }
        }
        cout << count + 1 << endl;
        count = 0;
    }
}
