#include <cstdio>
using namespace std;

int GCD(int a, int b)
{
	int t;
	while(b)
		t=a, a=b, b=t%b;
		return a;
}

int abs(int n)
{	
	return (n>0?n:-n);
}

int main ()
{
	int list[5000], tmp_gcd;
	while(scanf("%d", &list[0]), list[0])
	{
		int tc=1;
		while(scanf("%d", &list[tc]), list[tc])
			tc++;
		tmp_gcd=abs(list[1]-list[0]);
		for(int i=2;i<tc;i++)
		{
			tmp_gcd=GCD(tmp_gcd, list[i]-list[0]);
		}
		printf("%d\n", tmp_gcd);
	}
}
