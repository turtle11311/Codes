#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double a, b, c1, c2;
	while (cin >> a >> b,a && b) {
		if (a<b) swap(a,b);
		c1=floor(sqrt(a*a+b*b));
		c2=floor(sqrt(a*a-b*b));
		if ((a*a+b*b) == c1*c1)
			cout << c1 << endl;
		else if (b*b+c2*c2==a*a)
			cout << c2 << endl;
		else
			cout << "Wrong\n";
	}
}