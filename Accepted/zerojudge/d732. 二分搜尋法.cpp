#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int a[100000];
	int n, k, i, x, lb, ub;
	cin >> n >> k;
	for (i=0;i<k;i++)
		cin >> a[i];
	while (k--) {
		cin >> x;
		lb=0, ub=n;
		while (ub-lb>1) {
			if (x<a[(lb+ub)/2])
				ub=(lb+ub)/2;
			else
				lb=(lb+ub)/2;}
		if (a[lb]==x)
			cout << lb+1 << endl;
		else
			cout << "0\n";
	}
}