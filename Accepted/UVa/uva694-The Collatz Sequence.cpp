#include <cstdio>
#include <iostream>
using namespace std;

int main () {
	long long a, b, tc=1, i, ans;
	while (scanf("%lld%lld", &a, &b), (a&b)!=-1) {
		if (a>b) swap(a, b);
		ans=1;
		i=a;
		do {
			if (i%2)
				i=3*i+1;
			else
				i/=2;
			ans++;
		} while ((i!=1) && (i<=b));
		printf ("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", tc++, a, b, ans-(i>b));
	}
}