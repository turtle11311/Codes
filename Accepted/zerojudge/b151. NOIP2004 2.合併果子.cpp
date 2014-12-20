#include <iostream>
#include <queue>
using namespace std;

int main () {
	priority_queue <int, vector<int>, greater<int> > p;
	int n, e=0, x, i;
	cin >> n;
	for (i=0; i<n; i++) {
		cin >> x;
		p.push(x);
	}
	while ((signed)p.size() > 1) {
		x  = p.top(), p.pop();
		x += p.top(), p.pop();
		p.push(x);
		e += x;									
	}
	cout << e << endl;
}