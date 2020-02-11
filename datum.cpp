#include <iostream>
#include <math.h>
 
using namespace std;


int main()
{

 int d, m, dw;

 cin >> d >> m;

 int K = 2009 % 100;
 int J = ceil(2009/100);
 cout << K << endl;
 cout << J << endl;

 dw = fmod((d + ceil((13*(m+1))/5) + K + ceil(K/4) + ceil(J/4) + 5*J), 7.0);

 cout << dw << endl;

  return 0;
}