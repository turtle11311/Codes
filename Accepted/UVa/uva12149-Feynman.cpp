#include <cstdio>
using namespace std;

int main () {
	int n;
	while (scanf("%d", &n), n)
		printf("%d\n", n*(n+1)*(2*n+1)/6);
}