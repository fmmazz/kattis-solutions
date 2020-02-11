#include <iostream>
#include <cstring>
 
using namespace std;


int main()
{

  int T;

  cin >> T;

  while(T--){
    int b;
    float p;
    float bpm, abpm;

    cin >> b >> p;

    bpm = 60/p;
    abpm = bpm * b;

    printf("%.4f %.4f %.4f\n", abpm-bpm, abpm, abpm+bpm);

  }


  return 0;
}