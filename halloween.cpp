#include <iostream>
#include <cmath>
 
using namespace std;

int main()
{

  int a;
  char mon[4];

  cin >> mon >> a;

  if (mon[0] == 'O' && a == 31)
  	cout << "yup\n";
  else if (mon[0] == 'D' && a == 25)
  	cout << "yup\n";
  else
  	cout << "nope\n";
  
  return 0;
}