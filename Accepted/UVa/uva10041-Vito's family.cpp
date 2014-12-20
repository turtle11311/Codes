#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main () {
	int t, n, i, sum, med;
	int ran[30010];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i=0;i<n;i++) {
			scanf("%d", &ran[i]);
			sum+=ran[i];
		}
		sort(ran, ran+n);
		if(n%2)
			med=ran[(n+1)/2-1];
		else
			med=(ran[n/2-1]+ran[(n/2)])/2;
		for(i=0, sum=0;i<n;i++)
			sum+=abs(ran[i]-med);
		printf("%d\n", sum);
	}
}