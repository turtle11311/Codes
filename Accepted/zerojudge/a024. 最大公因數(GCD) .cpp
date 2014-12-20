#include <iostream>
using namespace std;

int main () {
	long long a, b, t;
	while (cin >> a >> b) {
		while (b)
		t=a%b,a=b,b=t;
		cout << a << endl;
	}
}