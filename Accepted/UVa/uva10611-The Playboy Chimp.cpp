#include <cstdio>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
	return a<b;
}

int main ()
{
	int *low, *high;
	int n, k;
	static int girl[50010], boy[25010];
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &girl[i]);
	sort(girl, girl+n, cmp);
	scanf("%d", &k);
	for(int i=0;i<k;i++)
		scanf("%d", &boy[i]);
	for(int i=0;i<k;i++)
	{
		low=lower_bound(girl, girl+n, boy[i])-1;
		high=upper_bound(girl, girl+n, boy[i]);
		if(low == girl + n || low - girl < 0)
			printf("X %d\n", girl[high-girl]);
		else if(high == girl + n)
			printf("%d X\n", girl[low-girl]);
		else
			printf("%d %d\n", girl[low-girl], girl[high-girl]);
	}
}
