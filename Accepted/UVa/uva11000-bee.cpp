#include <cstdio>
using namespace std;

int main () {
	unsigned long long int f[80], m[80];
	int i, n;
	f[0]=f[1]=1;
	m[0]=0,m[1]=1;
	for(i=2;i<80;i++) {
		f[i]=f[i-1]+f[i-2];
		m[i]=f[i-1]+m[i-1];
	}
	while(scanf("%d", &n), n!=-1)
		printf("%llu %llu\n", f[n+1]-1, f[n]+m[n]);
}