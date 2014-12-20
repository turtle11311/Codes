#include <cstdio>
using namespace std;

int main () {
	int n, sum;
	while (scanf("%d", &n)!=EOF) {
		for (sum=n;n>2;n=n/3+n%3)
			sum+=n/3;
		printf("%d\n", (n==2)+sum);
	}
}