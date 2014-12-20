#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	long long n, s[3], i=1;
	cin >> n;
	while (n--) {
		cin >> s[0] >> s[1] >> s[2];
		cout << "Case " << i++ <<": ";
		sort(s,s+3);
		if (s[0]<=0 || s[1]<=0 || s[2]<=0 || s[0]+s[1]<=s[2])
			cout << "Invalid\n";
		else if (s[0]!=s[2] && (s[0]==s[1] || s[1]==s[2]))
			cout << "Isosceles\n";
		else if (s[0]==s[2])
			cout << "Equilateral\n";
		else
			cout << "Scalene\n";
	}
}