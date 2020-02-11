#include <iostream>
#include <cstring>
 
using namespace std;


int main()
{

  char a[100000];

  cin >> a;

  int wR, lR, uR, sR;

  for (int i = 0; i < strlen(a); i++)
  {
  	if (a[i] == 95)
  		wR++;
  	else if ( (a[i] >= 33 && a[i] <= 64) || (a[i] >= 91 && a[i] <= 96) || a[i] >= 123)
  		sR++;
  	else if (a[i] >= 65 && a[i] <= 90)
  		uR++;
  	else if (a[i] >= 97 && a[i] <= 122)
  		lR++;
  	
  }

  printf("%.6f\n%.6f\n%.6f\n%.6f\n", wR/double(strlen(a)), lR/double(strlen(a)), uR/double(strlen(a)), sR/double(strlen(a)));
  //cout << wR/double(strlen(a)) << "\n" << lR/double(strlen(a)) << "\n" << uR/double(strlen(a)) << "\n" << sR/double(strlen(a)) << "\n";


  return 0;
}