#include <iostream>
using namespace std;

int main () {
	int a[52], t=1, i, mean, ans=0, n;
	while (cin >> n,n) {
		for (i=0, mean=0;i!=n;i++) {
			cin >> a[i];
			mean += a[i];
		}
		mean /= n;
		for (i=0;i!=n;i++) {
			if (a[i] > mean)
				ans += a[i] - mean;
		}
		cout << "Set #"<< t++ << endl <<"The minimum number of moves is " << ans <<".\n\n";
		ans=0;
	}
}
