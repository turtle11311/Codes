#include <iostream>
using namespace std;

int main () {
	long long n, a, b, c;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		if (a==1)
			cout << b+c << endl;		
		else if (a==2)
			cout << b-c << endl;		
		else if (a==3)
			cout << b*c << endl;		
		else if (a==4)
			cout << b/c << endl;
	}
}