#include <cstdio>
#include <cmath>
using namespace std;

int main () {
	int n, ans, i, t;
	while (ans=0, scanf("%d", &n), n) {
		t=n;
		for (i=2;i<=sqrt((double)n);i++) {
			if (t%i==0) ans++;
			for (;t%i==0;)
				t/=i;}
		if (t!=1) ans++;
		printf("%d : %d\n", n, ans);
	}
}