#include <stdio.h>
#include <cmath>
using namespace std;

int main () {
	int n, lg, i, f, ans;
	while (scanf("%d", &n)!=EOF) {
		lg = int(log((double)n)/log((double)5));
		for (i=1,ans=0,f=5;i<=lg;i++,f*=5)
			ans += n/f;
		printf("%d \n", ans);
	}
}