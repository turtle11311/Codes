#include <iostream>
using namespace std;

int main ()  {
	char a1, a2, a3, a4, g1, g2, g3, g4;
	int n, A, B;
	while (cin >> a1 >> a2 >> a3 >> a4)  {
		cin >> n;
		while (n--)  {
			cin >> g1 >> g2 >> g3 >> g4;
			A = (a1==g1) + (a2==g2) + (a3==g3) + (a4==g4);
			B = (a1==g2) + (a1==g3) + (a1==g4) +
				(a2==g1) + (a2==g3) + (a2==g4) +
				(a3==g1) + (a3==g2) + (a3==g4) +
				(a4==g1) + (a4==g2) + (a4==g3);
			cout << A << 'A' << B << 'B' << endl;
		}
	}
}