#include <iostream>
using namespace std;

int main () {
	double n, grade, i=0, d;
	while (cin >> n) {
		d=n;
		while (n--) {
			cin >> grade;
			i+=grade;
		}
		if ((i/d)<=59)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}