#include <cstdio>
#include <cstring>
using namespace std;

int main () {
	char n[32];
	int p, i, len, sum;
	while (scanf("%s", &n), strcmp(n, "0")) {
		len=strlen(n);
		for(i=len-1, p=2, sum=0;i>-1;i--,p*=2)
			sum+=(n[i]-'0')*(p-1);
		printf("%d\n", sum);
	}
}