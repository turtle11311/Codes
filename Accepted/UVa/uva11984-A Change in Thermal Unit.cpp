#include <cstdio>
using namespace std;

int main () {
	int n, tc=1;
	double t, c;
	scanf("%d", &n);
	while (n--) {
		scanf("%lf%lf", &t, &c);
		printf("Case %d: %.2lf\n", tc++, t+(c/9*5));
	}
}