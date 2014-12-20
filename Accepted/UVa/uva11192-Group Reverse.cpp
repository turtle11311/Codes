#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int n, i, j, t;
	char s[110];
	while (cin >> n >> ws, n) {
		gets(s);
		t=strlen(s)/n;
		for (i=t-1;i<strlen(s);i+=t)
			for(j=0;j<t;j++)
				printf("%c", s[i-j]);
		puts("");
	}
}