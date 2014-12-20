#include <cstdio>
using namespace std;

int main () {
	int h1, h2, m1, m2, a1, a2;
	while (scanf("%d%d%d%d", &h1, &m1, &h2, &m2), (h1|h2|m1|m2)!=0) {
		a1=h1*60+m1;
		a2=h2*60+m2;
		printf( "%d\n", a2-a1+(a2-a1<0)*1440 );
	}
}