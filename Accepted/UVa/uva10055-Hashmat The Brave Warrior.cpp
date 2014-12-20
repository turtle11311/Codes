#include <iostream>
using namespace std;

int main ()  {
	long long int m, n;
	while (cin >> m >> n)  {
		if (m > n)
			cout << m - n << endl;
		else
			cout << n - m << endl;
	}
}