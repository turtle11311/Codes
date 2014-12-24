#include <cstdio>
using namespace std;

int main ()
{
	int value[36], query, sum[37];
	int n, ans, min, k;
	scanf("%d", &n);
	for(int tc=1;tc<=n;tc++)
	{
		printf("Case %d:\n", tc);
		for(int i=0;i<36;i++)
			scanf("%d", &value[i]);
		scanf("%d", &k);
		for(int i=0;i<k;i++)
		{
			scanf("%d", &query);
			for(int base=2;base<=36;base++)
			{
				sum[base]=0;
				for(int num=query;num;num/=base)
					sum[base]+=value[num%base];
			}
			min=sum[2];
			for(int j=3;j<=36;j++)
				if(min>sum[j])
					min=sum[j];
			printf("Cheapest base(s) for number %d:", query);
			for(int j=2;j<=36;j++)
				if(min==sum[j])
					printf(" %d", j);
			puts("");
		}
		if(tc!=n)
			puts("");
	}
}
