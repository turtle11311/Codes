#include<iostream>
using namespace std;

int main () {
	long long a, b, r;
	cin >> a >> b;
	for (r=1;b;b/=2) {
		if (b%2)
			r*=a, r%=10007;
		a*=a, a%=10007;
	}
	cout << r;
}
