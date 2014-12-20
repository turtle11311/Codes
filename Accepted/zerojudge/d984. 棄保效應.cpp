#include <iostream>
using namespace std;

int main () {
	long long int a, b, c;
	while (cin >> a >> b >> c)  {
		if (a>b+c || b>a && a>c && a+c>b || c>a && a>b && a+b>c)
			cout << "A\n";
		else if (b>a+c || a>b && b>c && b+c>a || c>b && b>a && b+a>c)
			cout << "B\n";
		else
			cout << "C\n";
	}
}