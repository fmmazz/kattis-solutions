#include <iostream>
#include <cmath>
 
using namespace std;

int fat(int n){
  if (n == 1)
    return 1;
  else
    return n * fat(n-1);
}

int main()
{

  int T, a;
  
  cin >> T;

  while(T--){
    cin >> a;

    cout << fat(a) % 10 << "\n";
  }
  
  return 0;
}