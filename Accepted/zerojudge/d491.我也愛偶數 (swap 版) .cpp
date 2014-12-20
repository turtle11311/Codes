#include <iostream>
using namespace std;

int main () {

	int a, b, t;
	cin >> a >> b;
	if (a > b) {      //狦a > b
        t = a;        //盢a, b が传        
		a = b;        
		b = t;
    }    
	a = a + a%2;      //单a 程案计    
	b = b - b%2;      //单b 程案计    
	cout << (a + b) * ((b - a) / 2 + 1) / 2;
}