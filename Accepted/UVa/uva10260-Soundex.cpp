#include <cstdio>
#include <cstring>
using namespace std;

int soundex (char ch) {
	if (ch=='B' || ch=='F' || ch=='P' || ch=='V')
		return 1;
	else if (ch=='C' || ch=='G' || ch=='J' || ch=='K' || ch=='Q' || ch=='S' || ch=='X' || ch=='Z')
		return 2;
	else if (ch=='D' || ch=='T')
		return 3;
	else if (ch=='L')
		return 4;
	else if (ch=='M' || ch=='N')
		return 5;
	else if (ch=='R')
		return 6;
	return 0;
}
int main () {
	char w[22];
	int i, t;
	while (scanf("%s", &w)!=EOF) {
		for (i=0, t=soundex(w[0]);i<strlen(w);i++) {
			if (t!=soundex(w[i]))
				if (soundex(w[i-1]))
					printf("%d", soundex(w[i-1]));
			t=soundex(w[i]);
		}
		if (soundex(w[i-1]))
			printf("%d", soundex(w[i-1]));
		puts("");
	}
}