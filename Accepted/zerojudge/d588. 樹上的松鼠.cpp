#include <iostream>
using namespace std;

int main () {
	int n, s, x1, y1, h1, x2, y2, h2, a;
	cin >> n;
	while (n--)  {
		a = 0;
		cin >> s;
		while (s--)  {
			cin >> x1 >> y1 >> h1 >> x2 >> y2 >> h2;
			if (h1 > h2 && h1 >a)
				a = h1;
			else if (h2 > h1 && h2 > a)
				a = h2;
		}
		cout << a <<endl;
	}
}