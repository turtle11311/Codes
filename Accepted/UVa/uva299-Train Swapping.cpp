#include <cstdio>
#include <iostream>
using namespace std;

int main () {
	int t, n, p[51], i, j, ans;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i=0;i<n;i++)
			scanf("%d", &p[i]);
		ans=0;
		for (i=0;i<n;i++)
			for(j=0;j<(n-1);j++)
				if (p[j]>p[j+1])
					swap(p[j],p[j+1]), ans++;
		printf("Optimal train swapping takes %d swaps.\n", ans);
	}
}