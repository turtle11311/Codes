#include <iostream>
#include <string>
using namespace std;

int main () {
	int n, m, code, i;
	string subs, ans;
	while (cin >> n >> m,n && m) {
		ans=" ";
		for (i=0;i<n;i++) {
			cin >> subs;
			ans+=subs;}
		for (i=0;i<m;i++) {
			cin >> code;
			cout << ans[code];}
		cout << endl;
	}
}