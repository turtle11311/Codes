#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double a, b;
	while (cin >> a >> b, a && b) {
		if (a<b) swap(a, b);
		a = floor(sqrt(a));
		b = ceil(sqrt(b));
		cout << a-b+1 << endl;
	}
}