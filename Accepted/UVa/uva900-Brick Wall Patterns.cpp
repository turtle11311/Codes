#include <cstdio>
using namespace std;

int main () {
	unsigned long long int a[90]={1,1};
	int n, i;
	for (i=2;i<90;i++)
		a[i]=a[i-1]+a[i-2];
	while (scanf("%d", &n), n)
		printf("%lld\n", a[n]);
}