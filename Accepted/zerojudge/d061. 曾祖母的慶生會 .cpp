#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	if (n<0)
		cout << 97-n-1;
	else
		cout << 97-n;
}