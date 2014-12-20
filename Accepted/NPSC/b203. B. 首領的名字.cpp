#include <iostream>
#include <string>
using namespace std;

int main () {
	int m, k, t=1;
	string bn1, bn2, sn;
	cin >> m >> ws;
	while (m--) {
		getline(cin, bn1, '#');		//¦r¦ê¨ú¨ì¡­¸¹
		getline(cin, bn2);
		cout << "DATA SET #" << t++ << ":\n";
		cin >> k >> ws;
		while (k--) {
			getline(cin, sn);
			if (sn.size()<(bn1.size()+bn2.size()))
				cout << "IMPOSSIBLE\n";
			else if (bn1==sn.substr(0,bn1.size()) &&
				(bn2==sn.substr(sn.size()-bn2.size()) || bn2==""))
				cout << "POSSIBLE\n";
			else
				cout << "IMPOSSIBLE\n"; 
		}
	}
}