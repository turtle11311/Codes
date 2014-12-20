#include <cstdio>
using namespace std;

int main ()
{
	long long int a, b, c, d, L;
	int ans;
	while(scanf("%lld%lld%lld%lld%lld", &a, &b, &c, &d, &L)!=EOF && a|b|c|d|L)
	{
		ans=0;
		int f;
		for(int i=0;i<=L;i++)
		{
			f=(i*i*a)+(i*b)+c;
			if(f%d==0)
				ans++;
		}
		printf("%d\n", ans);
	}
}
