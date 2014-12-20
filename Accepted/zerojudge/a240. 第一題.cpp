#include <iostream>
using namespace std;

int main () {
	int m, n, q, r, sum;
	cin >> m;
	while (m--) {
		sum=0;
		r=10;
		cin >> n;
		while (n--) {
			q=r/17;
			r=r-17*q;
			r*=10;
			sum+=q;
		}
		cout << q << ' ' << sum << endl;
	}
}