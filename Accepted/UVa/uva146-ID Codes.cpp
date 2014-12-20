#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main () {
	string str;
	int n;
	while (cin >> str, str!="#") {
		n=str.size();
		if (next_permutation(str.begin(),str.end())==true)
			cout << str << endl;
		else
			cout << "No Successor\n";
	}
}