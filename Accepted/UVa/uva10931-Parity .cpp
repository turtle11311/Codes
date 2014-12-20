#include <iostream>
using namespace std;

int main () {
	char ans[40];
	int n, i, par, d;
	while (cin >> n, d=n, n) {
		for (i=0;i<40;i++)
			ans[i]=' ';
		for (i=0;d!=0;i++,d/=2)
			ans[i]=(d%2) + '0';
		cout << "The parity of";
		for (;i>=0;i--)
			cout << ans[i];
		for (i=0,par=0;i<40;i++)
			if (ans[i] == '1')
				par++;
		cout << " is " << par << " (mod 2).\n";
	}
}