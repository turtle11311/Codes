#include <cstdio>
#include <iostream>
using namespace std;

int main () {
	long long m1, m2, tm, ans, i, count, layer;
	while (scanf("%lld%lld", &m1, &m2), m1 && m2) {
		if (m1>m2) swap(m1,m2);
		for(i=m1, count=0;i<=m2;i++) {
			layer=0, tm=i;
			do{
				if (tm%2)
					tm=3*tm+1;
				else
					tm/=2;
				layer++;} while (tm!=1);
			if (layer>count)
			count=layer, ans=i;
		}
		printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", m1, m2, ans, count);
	}
}