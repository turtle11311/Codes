#include <iostream>
using namespace std;

int main () {

	int a, b;
	cin >> a >> b;
	a = a + a%2;
	b = b - b%2;
	cout << (b - a) / 2 + 1;
}