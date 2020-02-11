#include <iostream>
#include <cstring>
 
using namespace std;


int main()
{

  int p11, p12, p21, p22, p31, p32;
  int p41, p42;

  cin >> p11 >> p12 >> p21 >> p22 >> p31 >> p32;

  if (p11 == p21)
    p41 = p31;
  else if (p11 == p31)
    p41 = p21;
  else if (p21 == p31)
    p41 = p11;

  if (p12 == p22)
    p42 = p32;
  else if (p12 == p32)
    p42 = p22;
  else if (p22 == p32)
    p42 = p12;

  cout << p41 << " " << p42 << "\n";

  return 0;
}