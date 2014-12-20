#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int t, a, b, i, d, ans, cs=1;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a>b)
			swap(a,b);
		d=int(sqrt(float(a)));
		a==1?ans=1:ans=0;
		for (i=d+1;i*i<=b;i++)
			ans+=i*i;
		cout << "Case " << cs++ << ": " << ans << endl;
	}
}