#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main () {
	char s1[1020],s2[1020];
	int i, j;
	while (gets(s1), gets(s2)) {
		int fq1[128]={};
		int fq2[128]={};
		for(i=0;s1[i];i++)
			fq1[s1[i]]++;
		for(i=0;s2[i];i++)
			fq2[s2[i]]++;
		for(i=33;i<127;i++)
			for(j=min(fq1[i],fq2[i]);j>0;j--)
				putchar(i);
		puts("");
	}
}