#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int a, b, c, a1, a2, d;
	while (cin >> a >> b >> c) {
		d = b*b-4*a*c;
		if (d<0)
			cout << "No real root\n";
		else if (d==0) {
			a1=(-b/(2*a));
			cout << "Two same roots x=" << a1 << endl;
		}
		else {
			a1=(-b+(int)sqrt((double)d))/(2*a);
			a2=(-b-(int)sqrt((double)d))/(2*a);
			cout << "Two different roots x1=" << a1 << " , x2=" << a2 << endl;
		}
	}
}