#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main () {
	string s;
	int layer, i, sum, t;
	while (cin >> s, s!="0") {
		for(sum=i=0;i<s.size();i++)
			sum+=s[i]+-'0';
		if (sum%9!=0)
			cout << s << " is not a multiple of 9.\n";
		else {
			layer=1;
			while (sum>10) {
				for (t=0;sum!=0;sum/=10)
					t+=sum%10;
				sum=t, layer++;
			}
			cout << s << " is a multiple of 9 and has 9-degree " << layer << ".\n";
		}
	}
}