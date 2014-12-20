#include <cstdio>
using namespace std;

int main () {
	double x;
	int i, j, n, d[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
	long long form[30001]={1};
	for(i=0;i<11;i++)
		for(j=d[i];j<30001;j++)
			form[j]+=form[j-d[i]];
	while (scanf("%lf", &x), x) {
		n=int(x*100+0.5);
		printf("%6.2lf%17lld\n", x, form[n]);
	}
}