#include <cstdio>
#include <cmath>
using namespace std;

int SUM (int n) {
	int i, sum;
	for(i=2,sum=1;i<n;i++)
		if (n%i==0)
			sum+=i;
	return sum;
}

int main () {
	int n, isperfect;
	while(scanf("%d", &n)!=EOF)
	{
		isperfect=SUM(n);
		if (isperfect==n)
			puts("完全數");
		else if (isperfect>n)
			puts("盈數");
		else
			puts("虧數");
	}
}