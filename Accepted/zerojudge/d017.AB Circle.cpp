//by Turtlebee
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int count_a (char a[]) {
	int i, cnt=0;
	for(i=0;a[i];i++)
		if(a[i]=='a')
			cnt++;
	return cnt;
}

int main () {
	int a, b, a0, b0, tc=1, length, i, j;
	static char n[1001];
	while(scanf("%s", n)!=EOF)
	{
		if (tc!=1)              puts("");
		printf("AB Circle #%d:\n", tc++);
		length=strlen(n);
		a=count_a(n);
		b=length-a;
		for(i=0;i<length;i++)
		{
			a0=b0=0;
			for(j=i;j<length;j++)
			{	
				if(a-a0==b0||b-b0==a0)
					printf("%d,%d\n", i, j);
				n[j]=='a'? a0++ : b0++;
			}
		}
	}
}
