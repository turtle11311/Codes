#include <iostream>
using namespace std;

int main () {
	int a, b;
	while (cin >> a >> b) {
		if (a==b)
			cout << "Ok!\n";
		else
			cout << (b && a%b==0?"Ok!\n":"Impossib1e!\n");
	}
}