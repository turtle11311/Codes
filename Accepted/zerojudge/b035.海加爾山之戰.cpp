#include <iostream>
using namespace std;

int main () {
	int n, s, t;
	while (cin >> n, n)  {
		t = 0;
		while (n--)  {
			cin >> s;
			t += s*s;
		}
		cout << t << endl;
	}

}