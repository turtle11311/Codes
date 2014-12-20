#include <cstdio>
using namespace std;

int main () {
	int n, a, b,  tc=1;
	scanf("%d", &n);
	while (n--) {
		scanf("%d%d", &a, &b);
		a+=(a%2==0);
		b-=(b%2==0);
		printf("Case %d: %d\n", tc++, (a+b)*((b-a)/2+1)/2);
	}
}