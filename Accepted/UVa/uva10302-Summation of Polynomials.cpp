#include <cstdio>
using namespace std;

int main () {
	long long n;
	while (scanf("%lld", &n)!=EOF)
		printf("%lld\n", (n*(n+1)/2)*(n*(n+1)/2));
}