#include <cstdio>
#include <cstring>
using namespace std;

int main () {
	char n1[15], n2[15];
	int i, carry, c;
	while (scanf("%s%s", &n1, &n2), strcmp(n1,"0") && strcmp(n1,"0")) {
		carry=0;
		for (i=0;n1[i] && n2[i];i++) {
			c=n1[i]-'0'+n2[i]-'0';
			if (c>9)
				carry++, n1[i+1]++;
		}
		if (carry==1)
			printf("1 carry operation.\n");
		else if(carry>1)
			printf("%d carry operation.\n", carry);
		else
			printf("No carry operation.\n");
	}
}