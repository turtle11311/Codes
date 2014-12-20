#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main () {
	char sp; 
	int n, i, j;
	string code[]={"---.","--....",".-..-","-----",".--","..-.-","--..--","-...","-.--","..-..-.--","..-..--","----.","..---","-.-.","--.-","--...-","..-..-..-",".-.-","-..-","...",".-...",
		"..-...","..--.","..-..-.-.","--..-.","..-..-..."};
	string cs, tmp;
	cin >> n >> ws;
	while (n--) {
		getline(cin, cs);
		for (i=0;i<cs.size();i++) {
			if (cs[i]==' ')
				cout << ' ';
			else{
				tmp+=cs[i];
				for(j=0;j<26;j++) {
					if(tmp==code[j]) {
						cout << char('A'+j);
						tmp="";
						break;
					}
				}
			}
		}
		cout << endl;
	}
}