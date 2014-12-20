#include <cstdio>
using namespace std;

int main () {
	int n, t, i, a[13], tc=1;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &t);
		for(i=0;i<t;i++)
			scanf("%d", &a[i]);
		printf("Case %d: %d\n", tc++, a[t/2]);
	}
}