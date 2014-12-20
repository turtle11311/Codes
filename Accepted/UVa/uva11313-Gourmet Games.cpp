#include <cstdio>
using namespace std;
int main () {
	int n, a, b;
	scanf("%d", &n);
	while (n--) {
		scanf("%d%d", &a, &b);
		int ans = 0;
		while (a > 0) {
			a = a-b;
			ans++;
			if (a <= 0)		break;
			a++;
		}
		if (a == 0)
			printf("%d\n", ans);
		else
			printf("cannot do this\n");
	}
}
