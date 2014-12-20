#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main () {
	string s;
	int i, j;
	char key[49]={' ',' ','`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};
	while (getline(cin, s)) {
		for (i=0;i<s.size();i++) {
			for (j=1;j<48;j++)
				if (s[i]==key[j])
					break;
			printf("%c", key[j-1]);
		}
		puts("");
	}
}
