#include <iostream>
using namespace std;

int main ()  {
	char n1, n2, n3, n4, n5, n6, n7, n8, n9, d, cn;
	int sc;
	cin >> n1 >> d >> n2 >> n3 >> n4 >> d >> n5 >> n6 >> n7 >> n8 >> n9 >> d >> cn;
	sc = (n1-'0')*1 + (n2-'0')*2 + (n3-'0')*3 + (n4-'0')*4 + (n5-'0')*5 + 
		 (n6-'0')*6 + (n7-'0')*7 + (n8-'0')*8 + (n9-'0')*9;
	if (sc%11 == (cn-'0'))
		cout << "Right\n";
	else {
		if (sc%11 == (cn-78))
		    cout << "Right\n";
		else {
			cn = 
			cout << n1 << d << n2 << n3 << n4 << d << n5 << n6 << n7 << n8 << n9 << d << cn;
}