#include <iostream>
#include <cmath>
 
using namespace std;


int main()
{

  int T, w, h, a;
  
  cin >> T >> w >> h;

  while(T--){
    cin >> a;

    double d = sqrt( (h*h) + (w*w) );

    if (a <= d)
      cout << "DA\n";
    else
      cout << "NE\n";
  }
  
  return 0;
}