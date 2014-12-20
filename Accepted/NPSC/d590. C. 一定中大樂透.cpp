#include <iostream>
using namespace std;

int main () {
	int N, M;
	while (cin >> N >> M, N, M) {
		if (N%2 == M%2)
			cout << "Win" << endl;
		else
			cout << "Loss" << endl;
	}
}