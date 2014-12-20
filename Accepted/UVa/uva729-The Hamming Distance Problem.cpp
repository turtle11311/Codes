#include <cstdio>
#include <algorithm>
using namespace std;

int main () {
	int t, n, h, i;
	char ch[16];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &h);
		for (i=0;i<(n-h);i++)
			ch[i]='0';
		for (;i<n;i++)
			ch[i]='1';
		do {
			for (i=0;i<n;i++)
				printf("%c", ch[i]);
		puts("");}
		while(next_permutation(ch,ch+n)!=false);
		if (t!=0)
		puts("");
	}
}