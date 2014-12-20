#include <iostream>
using namespace std;

int main () {
	int a, b, y, leap = 0;
	cin >> a >> b;
	for (y = a; y <= b; y++)  {
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			leap++;
	}
	cout << leap << endl;
	
}