#include <iostream>
using namespace std;

int main () {
	long long n, a, i, j, ans;
	cin >> n;
	while (n--) {
		cin >> a;
		for (i=1,ans=0;i<=a;i*=2)
			for (j=1;i*j<=a;j*=5)
				ans++;
		cout << ans-1 << endl;
	}
}