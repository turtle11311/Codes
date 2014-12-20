#include <cstdio>
#include <cmath>
using namespace std;

int main () {
	long long n, t, x;
	while (scanf("%lld", &n)!=EOF) {
		t=(n+1)/2;
		t*=t;
		printf("%lld\n", 6*t-9);
	}
}
