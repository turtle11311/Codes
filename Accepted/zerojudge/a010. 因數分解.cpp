#include <cstdio>
#include <cmath>
using namespace std;

int main () {
	long long int i, n, e;
	double t;
	bool first;
	while (scanf("%lld", &n)!=EOF) {
		first=true;
		t=sqrt((double)n);
		for(i=2;i<=t;i++)
		{
			if (n%i==0)
			{
				if (first!=true)
					printf(" * ");
				first=false;
				e=0;
				do {
					n/=i, e++;
				}while (n%i==0);
				if (e==1)
					printf("%lld", i);
				else if (e>1)
					printf("%lld^%lld", i, e);
			}
		}
		if (n!=1 && first==true)
			printf("%lld", n);
		else if (n!=1)
			printf(" * %lld", n);
		puts("");
	}
}