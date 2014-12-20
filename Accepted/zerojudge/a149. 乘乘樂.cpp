#include <iostream>
using namespace std;

int main () {
	long long n, t, ans;
	cin >> t;
	while (t--) {
		cin >> n,ans=1;
		if (n==0) {
			cout << 0 << endl;continue;}
		for (;n!=0;n/=10)
			ans*=(n%10);
		cout << ans << endl;
	}
}