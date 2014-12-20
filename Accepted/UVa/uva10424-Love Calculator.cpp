#include <cstring>
#include <cstdio>
#include <cctype>
using namespace std;

int lovec(char s[]) {
	int i, sum, ans;
	for (i=0,sum=0;s[i];i++)
		if (isalpha(s[i]))
		sum+=tolower(s[i])-96;
	do {
		for (ans=0;sum!=0;sum/=10)
			ans+=sum%10;
		sum=ans;
	} while (ans>9) ;
	return ans;
}

int main () {
	char s1[30], s2[30];
	double cs1, cs2;
	while (gets(s1), gets(s2)) {
		cs1=lovec(s1);
		cs2=lovec(s2);
		if ((cs1/cs2)<1)
			printf("%.2lf %%\n", (cs1/cs2)*100);
		else
			printf("%.2lf %%\n", (cs2/cs1)*100);
	}
}