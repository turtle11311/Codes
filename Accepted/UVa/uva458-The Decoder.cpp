#include <iostream>
#include <string>
using namespace std;

int main () {
	int k='*'-'1', i;
	string str;
	while (getline(cin, str)) {
		for (i=0;i<str.size();i++)
			str[i]=char(str[i]+k);
		cout << str << endl;
	}
}