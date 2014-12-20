#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

int check(char a, char b) {
	if (a=='a'&&b=='e' || a=='a'&&b=='i' || a=='a'&&b=='o' || a=='a'&&b=='u' ||
		a=='e'&&b=='a' || a=='e'&&b=='i' || a=='e'&&b=='o' || a=='e'&&b=='u' ||
		a=='i'&&b=='a' || a=='i'&&b=='e' || a=='i'&&b=='o' || a=='i'&&b=='u' ||
		a=='o'&&b=='a' || a=='o'&&b=='e' || a=='o'&&b=='i' || a=='o'&&b=='u' ||
		a=='u'&&b=='a' || a=='u'&&b=='e' || a=='u'&&b=='i' || a=='u'&&b=='o')
		return 1;
	return 0;
}

int main () {
	int n, i;
	string s1, s2;
	cin >> n >> ws;
	while (n--) {
		cin >> s1 >> s2;
		if (s1.size()!=s2.size())
			printf("No\n");
		else {
			for (i=0;i<s1.size();i++) {
				if (s1[i]!=s2[i]) 
					if (check(s1[i], s2[i])==0)
						break;
			}
			if (i<s1.size()-1)
				printf("No\n");
			else
				printf("Yes\n");
		}
	}
}