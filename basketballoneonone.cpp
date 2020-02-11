#include <iostream>
#include <cstring>
 
using namespace std;


int main()
{

  char a[201];

  cin >> a;

  int pA = 0, pB = 0, t = 0;

  for (int i = 0; i < strlen(a); i = i + 2)
  {

    //cout << a[i] << "\n";
  	if (a[i] == 'A')
  		pA += a[i+1] - '0';
  	else if (a[i] == 'B')
  		pB += a[i+1] - '0';

    //cout << pA << " " << pB << "\n";
  	
    if (t == 0)
    {
      if(pA >= 11 && pB < 10){
        cout << "A\n";
        break;
      }
      else if(pB >= 11 && pA < 10){
        cout << "B\n";
        break;
      }
      else if(pA == 10 && pB == 10){
        t = 1;
      }
    }
    else{
      if(pA - pB >= 2){
        cout << "A\n";
        break;
      }
      else if(pB - pA >= 2){
        cout << "B\n";
        break;
      }
    }
    
    }

  return 0;
}