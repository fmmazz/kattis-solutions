#include <iostream>
#include <math.h>
 
using namespace std;


int main()
{

 int l, d, x;
 int min = 99999, max = -99999;

 cin >> l >> d >> x;

 for (int i = l; i <= d; i++)
 {
 	int sum = 0;
 	int num = i;

 	while(num > 0){
 		//cout << num << endl;
 		sum += num % 10;
 		num /= 10;
 		//cout << sum << "\t" << num << endl;
 	}

 	if (sum == x && i < min)
 		min = i;
 	if (sum == x && i > max)
 		max = i;
 }

 cout << min << endl << max << endl;
 
  return 0;
}