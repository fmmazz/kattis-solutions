#include <iostream>
#include <cmath>
 
using namespace std;

int main()
{

  int a,b,c,d;

  cin >> a >> b;

  c = 100 * (a % 10) + 10 * ((a/10) % 10) + ((a/100) % 10);

  d = 100 * (b % 10) + 10 * ((b/10) % 10) + ((b/100) % 10);

  if (c > d)
    cout << c << "\n";
  else
    cout << d << "\n";
  
  return 0;
}