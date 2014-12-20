#include <cmath>
#include <cstdio>
using namespace std;

int main () {
	double n, t;
	while (scanf("%lf", &n),n!=0) {
		t=sqrt(n);
		if (ceil(t)!=t)
			printf("no\n");
		else
			printf("yes\n");
	}
}