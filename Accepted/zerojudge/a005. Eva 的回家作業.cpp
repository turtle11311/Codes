#include <iostream>
using namespace std;

int main () {
	int n, a[4], i;
	cin >> n;
	while (n--) {
		for (i=0;i<4;i++)
			cin >> a[i];
		if (a[1]-a[0]==a[2]-a[1]) {		//���]�����t�ƦC
			for (i=0;i<4;i++)
				cout << a[i] << ' ';
			cout << a[3]+(a[1]-a[0]) << endl;}
		else if (a[1]/a[0]==a[2]/a[1]) {		//���]������ƦC
			for (i=0;i<4;i++)
				cout << a[i] << ' ';
			cout << a[3]*(a[1]/a[0]) << endl;}
	}
}
		