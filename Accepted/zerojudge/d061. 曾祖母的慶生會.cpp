#include <iostream>
using namespace std;

int main () {
	int y;
	cin >> y;
	if (y < 0)
		cout << 97 + (-y-1);
		if (y > 0)
		cout << 97 - y;
}