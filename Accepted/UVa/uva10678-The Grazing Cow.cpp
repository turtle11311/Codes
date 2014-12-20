#include <cstdio>
#include <cmath>
using namespace std;

int main () {
	int n;
	double D, L, r1, r2, ans, PI=acos(-1.0);
	scanf("%d", &n);
	while (n--) {
		scanf("%lf%lf", &D, &L);
		r1 = L / 2;
		r2 = sqrt (L*L - D*D) / 2;
		ans = PI*r1*r2;
		printf("%.3lf\n", ans);
	}
}