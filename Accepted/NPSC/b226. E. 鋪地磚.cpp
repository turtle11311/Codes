#include <iostream>
using namespace std;

int main () {
	int L, W, l, w;
	while (cin >> L >> W >> l >> w, L && W && l && w) {
		if (L==w && W==l) 
			cout << 1 << endl;
		else  { if (L%l || W%w)
			cout << -1 << endl;
		else
			cout << (L/l)*(W/w) << endl;
		}
	}
}