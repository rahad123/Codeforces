#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int i,a,j,div,mod,b,sum;
  cin >> a >> b;
  sum = a;
  while(a >= b)
  {
      div = (a / b);
      sum = sum + div;
      mod = a % b;
      a  = div + mod;

  }
  cout << sum << endl;
  return 0;

}
