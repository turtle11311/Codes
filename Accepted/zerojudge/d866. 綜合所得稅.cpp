#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	double i;
	cin >> i;
	if (i < 500000)
		cout << fixed << setprecision(0) << i*0.05-1 << endl;
	else if (i < 1130000)
		cout << fixed << setprecision(0) << i*0.12 - 35000-1 << endl;
	else if (i < 2260000)
		cout << fixed << setprecision(0) << i*0.2 - 125400-1 << endl;
	else if (i < 4230000)
		cout << fixed << setprecision(0) << i*0.3 - 351400-1 << endl;
	else
		cout << fixed << setprecision(0) << i*0.4 - 774400-1 << endl;
}