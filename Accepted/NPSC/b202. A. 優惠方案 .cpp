#include <iostream>
using namespace std;

int main () {
	int n, a, b, c;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		if (a==b || a==c || b==c)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}