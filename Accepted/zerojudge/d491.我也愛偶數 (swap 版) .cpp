#include <iostream>
using namespace std;

int main () {

	int a, b, t;
	cin >> a >> b;
	if (a > b) {      //�p�Ga > b
        t = a;        //�Na, b ����        
		a = b;        
		b = t;
    }    
	a = a + a%2;      //�j�󵥩�a ���̤p����    
	b = b - b%2;      //�p�󵥩�b ���̤j����    
	cout << (a + b) * ((b - a) / 2 + 1) / 2;
}