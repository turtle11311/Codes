#include <iostream>
#include <string>
using namespace std;

int main () {
	string s1, s2, mins1, mins2;
	int m, n, r, minr;
	cin >> m;
	while (m--) {
		cin >> n;
		minr=0;
		while (n--) {
			cin >> s1 >>  s2 >> r;
			if (r<minr) {
				mins1=s1;
				mins2=s2;
				minr=r;
			}
		}
		if (minr==0)
			cout << "Are you kidding me?" <<endl;
		else
			cout << mins1 << ' ' << mins2 <<endl;
	}
}