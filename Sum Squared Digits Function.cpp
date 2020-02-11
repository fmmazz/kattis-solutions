#include <iostream>
#include <cmath>
#include <math.h> 
 
using namespace std;

int main()
{

  int T;
  cin >> T;

  while(T--){

    int testCase;
    int base;
    unsigned long long num, finalN;
    int dig;
    int ssd = 0;

    cin >> testCase >> base >> num;

    int i = 0;
    while(num > 0){
      dig = num % base;
      num = num / base;
      ssd += dig * dig;
      finalN += dig * pow(10, i);
      i++;
      
    }

    cout << testCase << " " << ssd << "\n"; 
  }


  return 0;
}