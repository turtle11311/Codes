#include <cstdio>
using namespace std;

int main () {
	unsigned a, b;
	while (scanf("%u%u", &a, &b)!=EOF)
		printf("%u\n", a^b);
}