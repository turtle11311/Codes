#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main () {
	unsigned i, cnt;
	string s;
	while (getline(cin, s)) {
		cnt = (bool)isalpha(s[0]);
		for (i=1;i<s.size();i++) {
			if (isalpha(s[i]) && !isalpha(s[i-1]))
				cnt++;
		}
		cout << cnt << endl;
		cnt=0;
	}
}