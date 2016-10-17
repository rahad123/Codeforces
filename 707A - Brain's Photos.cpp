#include <iostream>

using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  bool b=true;
  for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
      char c;
      cin>>c;
      if (c=='M' or c=='C' or c=='Y')
	b=false;
    }
  }
  if (b) cout<<"#Black&White"<<endl;
  else cout<<"#Color"<<endl;
}
