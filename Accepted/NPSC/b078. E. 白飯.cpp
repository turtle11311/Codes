#include <iostream>
using namespace std;

int main () {
	int n, i, ans;
	double a[1000], arg;
	while (cin >> n, n) {
		for (i=0;i<n;i++)
			cin >> a[i];
		for (arg=0,i=0;i<n;i++)
			arg += a[i];
		arg /=n;
		for (ans=0,i=0;i<n;i++)
			if (a[i]<arg)
				ans++;
		cout << ans << endl;
	}
}