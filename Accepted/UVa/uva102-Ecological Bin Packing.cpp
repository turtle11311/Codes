#include <cstdio>
#include <iostream>
#define MAX 2147483647
using namespace std;

int main () {
	unsigned int b1, b2, b3, g1, g2, g3, c1, c2, c3, i, ans[6], lim;
	while (scanf("%u%u%u%u%u%u%u%u%u" , &b1, &g1, &c1,
		&b2, &g2, &c2, &b3, &g3, &c3)!=EOF) {
			/*BCG*/ans[0]=b2+b3+c1+c3+g1+g2;
			/*BGC*/ans[1]=b2+b3+g1+g3+c1+c2;
			/*CBG*/ans[2]=c2+c3+b1+b3+g1+g2;
			/*CGB*/ans[3]=c2+c3+g1+g3+b1+b2;
			/*GBC*/ans[4]=g2+g3+b1+b3+c1+c2;
			/*GCB*/ans[5]=g2+g3+c1+c3+b1+b2;
			for (i=0,lim=MAX;i<6;i++)
				lim=min(lim,ans[i]);
			if (lim==ans[0])
				printf("BCG %u\n", ans[0]);
			else if (lim==ans[1])
				printf("BGC %u\n", ans[1]);
			else if (lim==ans[2])
				printf("CBG %u\n", ans[2]);
			else if (lim==ans[3])
				printf("CGB %u\n", ans[3]);
			else if (lim==ans[4])
				printf("GBC %u\n", ans[4]);
			else
				printf("GCB %u\n", ans[5]);
	}
}