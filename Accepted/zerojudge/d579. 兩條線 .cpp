#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	double i;
	while (cin >> i) {
		if (i>=0)
			cout << fixed << setprecision(4) << '|' << i << "|=" << i << endl;
		if (i<0)
			cout << fixed << setprecision(4) << '|' << i << "|=" << -i << endl;
	}
}