#include <iostream>
#include <cmath>
#include <math.h> 
 
using namespace std;

int main()
{

  string cards;

  int T, C, G;
  T = G = C = 0;

  int result = 0;

  cin >> cards;

  for (int i = 0; i < cards.length(); i++)
  {
    if (cards[i] == 'T')
      T++;
    else if (cards[i] == 'C')
      C++;
    else if (cards[i] == 'G')
      G++;
  }

  int minN = 999999;

  if (T < C && T < G)
    minN = T;
  else if (G < T && G < C)
    minN = G;
  else if (C < G && C < T)
    minN = C;
  else if (T == C && C == G && T == G)
    minN = T;
  else
    minN = 0;

  //cout << minN << endl;

  result = T*T + G*G + C*C + 7*minN;

  cout << result << endl;

  return 0;
}