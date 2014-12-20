#include <iostream>
using namespace std;

int main () {
	char s;
	int n=1;
	while (cin.get(s)) {
		if (s == '"')
			if (n++ % 2)
				cout << "``";
			else
				cout << "''";
		else
			cout << s;
	}
}