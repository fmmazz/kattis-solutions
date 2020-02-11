#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

int main()
{

  int T;
  int set = 1;

  while(scanf("%d", &T) && T != 0){

    std::vector<string> names1; 
    std::vector<string> names2;

    string name;

    for (int i = 0; i < T; i++)
     {
      cin >> name;
      if (i % 2 == 0)
        names1.push_back(name);
      else
        names2.push_back(name);

     } 

    cout << "SET " << set << "\n";
    for (int i = 0; i < names1.size(); i++) 
      cout << names1[i] << "\n"; 

    for (int i = names2.size()-1; i >= 0; i--) 
      cout << names2[i] << "\n"; 

    set++;
  }


  return 0;
}