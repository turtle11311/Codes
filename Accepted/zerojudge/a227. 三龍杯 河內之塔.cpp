#include <cstdio>
using namespace std;

void hanoi (int n, char s, char d, char m) {
	if (n) {
		hanoi (n-1, s, m, d);
		printf("Move ring %d from %c to %c\n", n, s, d);
		hanoi (n-1, m, d, s);
	}
}

int main () {
	int n;
	while (scanf("%d", &n)!=EOF) {
		hanoi (n, 'A', 'C', 'B');
		puts("");
	}
}