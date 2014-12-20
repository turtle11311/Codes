#include <cstdio>
using namespace std;

int main () {
	int n, s, d;
	scanf("%d", &n);
	while (n--) {
		scanf("%d%d", &s, &d);
		if (s<d)
			printf("impossible\n");
		else if ((s-d)%2)
			printf("impossible\n");
		else
			printf("%d %d\n", (s+d)/2, s-(s+d)/2);
	}
}