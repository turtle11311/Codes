#include <cstdio>
using namespace std;

int main () {
	int n, ans;
	while (scanf("%d", &n), n) {
		for (ans=0;n%2;n/=2)
			ans++;
		printf("%d\n", ans);
	}
}