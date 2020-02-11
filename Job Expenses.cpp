#include <iostream>
#include <math.h>
#include <string>
 
using namespace std;


int main()
{

	int T;
	long long int total = 0;

	cin >> T;

	while(T--){
		int exp;

		cin >> exp;

		if(exp < 0)
			total += exp * -1;
	}

	cout << total << endl;
 
  return 0;
}