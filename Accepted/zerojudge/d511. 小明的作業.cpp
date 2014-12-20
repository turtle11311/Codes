#include <iostream>
using namespace std;
int main () {
	int a, b, c, n, bonus = 0;
	n = 5;
	while (n--) {
	    cin >> a >> b >> c;
		if (a<b+c && b<a+c && c<a+b)
			bonus++;
	}
	cout << bonus;
}