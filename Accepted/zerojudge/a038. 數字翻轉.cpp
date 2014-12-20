#include <iostream>
using namespace std;

int main () {
	long long n, ctrl;
	while (cin >> n,n*=10) {
		for (ctrl=0;n!=0;n/=10,ctrl+=n%10)
			if (ctrl != 0)
				cout << n%10;
		cout << endl;
	}
}
