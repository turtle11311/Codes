#include <iostream>
using namespace std;

int main () {
	unsigned long long a, b;
	while (cin >> a >> b, a, b) {
		if (a > b)
			cout << "Unfair\n";
		else
			cout << "Fair\n";
	}
}
