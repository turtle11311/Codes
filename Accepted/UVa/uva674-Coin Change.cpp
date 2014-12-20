#include <cstdio>
using namespace std;

int main () {
	int n, i, j, d[5]={1,5,10,25,50};
	long long form[10001]={1};
		for(i=0;i<5;i++)
			for(j=d[i];j<10001;j++)
				form[j]+=form[j-d[i]];
		while (scanf("%d", &n)!=EOF)
			printf("%lld\n", form[n]);
}