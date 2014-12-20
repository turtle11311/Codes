#include <cstdio>
#include <cmath>
using namespace std;

int main () {
	int tc, i;
	double k, x, y;
	while (scanf("%lf", &k)!=EOF) {
		int n1[10000]={}, n2[10000]={};
		for(x=k+1, tc=1;x<=2*k;x++) {
			y=k*x/(x-k);
			if(y==ceil(y)) {
				n1[tc]=x, n2[tc++]=y;
			}
		}
		printf("%d\n", tc-1);
		for (i=1;i<tc;i++)
			printf("1/%.0lf = 1/%d + 1/%d\n", k, n2[i], n1[i]);
	}
}