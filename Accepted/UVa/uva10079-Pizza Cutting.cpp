#include <cstdio>
using namespace std;

int main () {
	long long n;
	while (scanf("%lld", &n), n>=0)
		printf("%lld\n", ((n+1)*n/2+1));
}