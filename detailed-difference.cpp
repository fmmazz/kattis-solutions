#include <iostream>
#include <cstring>
 
using namespace std;


int main()
{

  int T;

  char a[51], b[51];
  
  cin >> T;

  while(T--){
  	cin >> a >> b;

  	cout << a << "\n";
  	cout << b << "\n";

  	for (int i = 0; i < strlen(a); ++i)
  	{
  		if (a[i] == b[i])
  			cout << ".";
  		else
  			cout << "*";
  	}
  	cout << "\n\n";
  }
  
  return 0;
}