#include <iostream>
using namespace std;

int main () {
	int n, x, a[3]={};
	cin >> n;
	while (n--) {
		cin >> x;
		a[x%3]++;
	}
	cout << a[0] << ' ' 
		 << a[1] << ' ' 
		 << a[2] << endl;
}