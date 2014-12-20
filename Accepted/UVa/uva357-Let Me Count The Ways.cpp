#include <cstdio>
using namespace std;

int main () {
	long long form[30001]={1};
	int i, j, n, d[]={1,5,10,25,50};
	for(i=0;i<5;i++)
		for(j=d[i];j<30001;j++)
			form[j]+=form[j-d[i]];
	while(scanf("%d", &n)!=EOF)
		if(n >= 0 && n <= 4)
			printf("There is only 1 way to produce %d cents change.\n", n);
		else 
			printf("There are %lld ways to produce %d cents change.\n", form[n], n);
}