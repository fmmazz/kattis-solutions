#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
 
using namespace std;


int main()
{

 string s;
 char w[80][80];

 std::getline( std::cin, s, '\n' );

 string word;

 int i = 0;
 for ( std::istringstream is( s ); is >> word; )
 {
    word.copy(w[i], word.size()+1);
    w[i][word.size()] = '\0';
    i++;
 }


  int rep = 0;

  for (int j = 0; j < i; j++)
  {
  	for (int k = j+1; k < i; k++)
  	{
  		//cout << strcmp(w[j],w[k]) << endl;
  		if (!strcmp(w[j],w[k]))
  		{
  			rep = 1;
  		}
  	}
  }

  if (!rep)
  	cout << "yes" << endl;
  else
  	cout << "no" << endl;
 
  return 0;
}