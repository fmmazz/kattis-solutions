#include <iostream>
#include <math.h>
 
using namespace std;


int main()
{

 string ans = "";

 char l;

 while(scanf("%c", &l) && l != '\n'){
 	int nl = (int) l;

 	switch(nl){
 		case 65:
 		case 97:
 			ans.append("@");
 			break;

 		case 66:
 		case 98:
 			ans.append("8");
 			break;

 		case 67:
 		case 99:
 			ans.append("(");
 			break;

 		case 68:
 		case 100:
 			ans.append("|)");
 			break;

 		case 69:
 		case 101:
 			ans.append("3");
 			break;

 		case 70:
 		case 102:
 			ans.append("#");
 			break;

 		case 71:
 		case 103:
 			ans.append("6");
 			break;

 		case 72:
 		case 104:
 			ans.append("[-]");
 			break;

 		case 73:
 		case 105:
 			ans.append("|");
 			break;

 		case 74:
 		case 106:
			ans.append("_|"); 		
 			break;

 		case 75:
 		case 107:
 			ans.append("|<");
 			break;

 		case 76:
 		case 108:
 			ans.append("1");
 			break;

 		case 77:
 		case 109:
 			ans.append("[]\\/[]");
 			break;

 		case 78:
 		case 110:
 			ans.append("[]\\[]");
 			break;

 		case 79:
 		case 111:
 			ans.append("0");
 			break;

 		case 80:
 		case 112:
 			ans.append("|D");
 			break;

 		case 81:
 		case 113:
			ans.append("(,)"); 		
 			break;

 		case 82:
 		case 114:
 			ans.append("|Z");
 			break;

 		case 83:
 		case 115:
 			ans.append("$");
 			break;

 		case 84:
 		case 116:
 			ans.append("']['");
 			break;

 		case 85:
 		case 117:
 			ans.append("|_|");
 			break;

 		case 86:
 		case 118:
 			ans.append("\\/");
 			break;

 		case 87:
 		case 119:
			ans.append("\\/\\/"); 		
 			break;

 		case 88:
 		case 120:
 			ans.append("}{");
 			break;

 		case 89:
 		case 121:
 			ans.append("`/");
 			break;

 		case 90:
 		case 122:
 			ans.append("2");
 			break;

 		default:
 			ans += l;
 			break;
 	}
 }

 cout << ans << endl;
 
  return 0;
}