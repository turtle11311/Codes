#include <cstdio>
using namespace std;

int main () {
	long long n, f, a, b, c, sum;
	scanf("%lld", &n);
	while (n--) {
		scanf("%lld", &f), sum=0;
		while (f--) {
			scanf("%lld%lld%lld", &a, &b, &c);
			sum+=a*c;
		}
		printf("%lld\n", sum);
	}
}