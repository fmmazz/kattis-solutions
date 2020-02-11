#include <iostream>
#include <math.h>
 
using namespace std;


int main()
{

 double m;

 cin >> m;

 cout << (long int) round(m * 1000 * (5280.0/4854.0)) << endl;
 
  return 0;
}