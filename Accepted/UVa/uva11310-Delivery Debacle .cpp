#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
	int t, n, i;
	long long a[50]={1,5,11};
	for (i=3;i<40;i++)
		a[i]=1*a[i-1]+4*a[i-2]+2*a[i-3];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		cout << a[n-1];
		puts("");
	}
}