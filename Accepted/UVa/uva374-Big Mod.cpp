#include <iostream>
using namespace std;

int main () {
	int R, B, P, M;
	while (cin >> B >> P >> M) {
		R=1, B%=M;
		while (P) {
			if (P%2==1) {
				R*=B, R%=M;}
			B*=B, B%=M;
			P/=2;}
		cout << R << endl;
	}
}
