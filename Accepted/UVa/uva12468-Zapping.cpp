#include <cstdio>
#include <cstdlib>
using namespace std;

int main () {
	int a, b, c;
	while (scanf("%d%d", &a, &b), a!=-1 && b!= -1) {
		c=abs(a-b);
		if (c>=50)
			c=100-c;
		printf("%d\n", c);
	}
}