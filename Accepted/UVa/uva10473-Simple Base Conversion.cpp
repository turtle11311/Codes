#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

int main () {
	char num[50];
	int i, d, ans;
	while (scanf("%s", num), strcmp(num, "-1")) {
		ans=0;
		if (num[0]=='0') {
			for (i=strlen(num)-1, d=1;i>1;i--, d*=16)
				if (isupper(num[i]))
					ans+=(num[i]-'A'+10)*d;
				else
					ans+=(num[i]-'0')*d;
			printf("%d\n", ans);
		}
		else {
			ans=atoi(num);
			printf("0x%X\n", ans);
		}
	}
}