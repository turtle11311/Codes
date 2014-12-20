#include <cstdio>
using namespace std;

int main () {
	int n, a, b, h, t;
	scanf("%d", &n);
	while (n--) {
		scanf("%d%d", &a, &b);
		h=a*b;
		while (b)
			t=a%b, a=b, b=t;
		printf("%d\n", h/a);
	}
}