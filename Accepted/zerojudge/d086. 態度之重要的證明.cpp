#include <iostream>
#include <cstdio>
#include <cctype>
#include <string>
using namespace std;

int main () {
	string s;
	int i, ans;
	while (cin >> s, ans=0, s!="0") {
		for (i=0;i<s.size();i++)
			if (isalpha(s[i])==0)	break;
		if (i<s.size()) {
			printf("Fail\n");
			continue;
		}
		for (i=0;i<s.size();i++)
			s[i] |= 32;
		for (i=0;i<s.size();i++)
			ans+=s[i]-96;
		printf ("%d\n", ans);
	}
}