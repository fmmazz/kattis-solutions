#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;


int main()
{

 int time;
 char problem;
 string state;

 int attempt[101];
 int accepted[101];

 int acceptedProb = 0;
 int finalTime = 0;

 memset(attempt, 0, sizeof(attempt));
 memset(accepted, 0, sizeof(accepted));  

 while(scanf("%d", &time) && time != -1){
 	cin >> problem >> state;

 	int indexProblem = (int) problem - 65;

 	if (!state.compare("wrong"))
 		attempt[indexProblem]++;
 	else{
 		accepted[indexProblem] = 1;
 		finalTime += time;
 		acceptedProb++;
 	}
 }

 for (int i = 0; i < 101; i++)
 {
 	if (attempt[i] > 0 && accepted[i] == 1){
 		finalTime += 20 * attempt[i];
 	}
 }
 
 cout << acceptedProb << " " << finalTime << endl;
 
  return 0;
}