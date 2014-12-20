#include <iostream>
using namespace std;

int main () {
	int r, c, a[100][100], x, y;
	while (cin >> r >> c) {
	for (x=0;x<r;x++)
		for (y=0;y<c;y++)
			cin >> a[x][y];

	for (x=0;x<c;x++){
		for (y=0;y<r;y++)
			cout << a[y][x] << ' ';
		cout << endl;
	}
	}
}