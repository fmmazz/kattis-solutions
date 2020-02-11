#include <iostream>
#include <cmath>
 
using namespace std;

int main()
{

  int T;
  float qT = 0;
  float q, y;

  cin >> T;

  while(T--){
  	cin >> q >> y;
  	qT += q * y;
  }

  cout << qT << "\n";

  return 0;
}