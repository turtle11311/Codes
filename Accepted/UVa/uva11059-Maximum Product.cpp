#include <cstdio>
#include <iostream>
using namespace std;

int sgn (long long a) {
	return (a>0)-(a<0);
}
int main () {
	long long t, n[20], i, j, sum, tmp;
	int tc=1;
	while (scanf("%lld", &t)!=EOF) {
		for (i=0;i<t;i++)
			scanf("%lld", &n[i]);
		for (i=0, tmp=0;i<t;i++) {
			for(j=i,sum=1;j<t;j++) {
				sum*=n[j];
				tmp=max(sum, tmp);
			}
		}
		printf("Case #%d: The maximum product is %lld.\n\n", tc++, tmp);
	}
}