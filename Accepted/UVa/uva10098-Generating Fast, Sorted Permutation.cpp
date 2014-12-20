#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

void permutation (int i, string s) {
	if (i==s.size()-1){
		cout << s;
		puts("");
	}
	else{
		permutation (i+1, s);
		for (int j=i+1; j<s.size(); j++) {
			if (s[j]==s[i])
				continue;
			swap (s[i], s[j]);
			permutation (i+1, s);
		}
	}
}

int main () {
	int n;
	string s;
	scanf("%d", &n);
	while (n--) {
		cin >> s;
		sort (s.begin(), s.end());
		permutation (0, s);
		puts("");
	}
}