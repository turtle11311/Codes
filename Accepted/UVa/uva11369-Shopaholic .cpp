#include <iostream>
#include <algorithm>
using namespace std;

bool cmp (int left, int right) {
	return left>right;
}

int main () {
	int t, n, v[20000]={}, i, s=0;
	cin >> t;
	while (t--) {
		cin >> n;
			for (i=0;i<n;i++)
				cin >> v[i];
			sort(v,v+n,cmp);
			for (i=2;i<n;i+=3)
				s+=v[i];
			cout << s << endl;
			s=0;
	}
}
