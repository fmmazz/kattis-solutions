#include <iostream>
#include <math.h>
 
using namespace std;


int main()
{

 int h;
 char suit;
 long long int points = 0;



 cin >> h >> suit;

 for (int i = 0; i < 4*h; i++)
 {
 	char card, sc;

 	cin >> card >> sc;

 	if (sc == suit)
 	{
 		switch(card){
 			case 'A':
 				points += 11;
 				break;
 			case 'K':
 				points += 4;
 				break;
 			case 'Q':
 				points += 3;
 				break;
 			case 'J':
 				points += 20;
 				break;
 			case 'T':
 				points += 10;
 				break;
 			case '9':
 				points += 14;
 				break;
 			case '8':
 				points += 0;
 				break;
 			case '7':
 				points += 0;
 				break;
 		}
 	}
 	else{
 		switch(card){
 			case 'A':
 				points += 11;
 				break;
 			case 'K':
 				points += 4;
 				break;
 			case 'Q':
 				points += 3;
 				break;
 			case 'J':
 				points += 2;
 				break;
 			case 'T':
 				points += 10;
 				break;
 			case '9':
 				points += 0;
 				break;
 			case '8':
 				points += 0;
 				break;
 			case '7':
 				points += 0;
 				break;
 		}

 	}
 }

 cout << points << endl;
 
  return 0;
}