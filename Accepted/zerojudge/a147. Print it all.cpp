#include <stdio.h>
using namespace std;

int main () {
	int n, i;
	while (scanf("%d", &n), n) {
		for (i=1;i<n;i++)
			if (i%7)
				printf("%d ", i);
		printf("\n");
	}
}