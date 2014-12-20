#include <iostream>
#include <queue>
using namespace std;

int main () {
	long long n, c=0, x, i;
	while (cin >> n,n) {
		priority_queue <int, vector<int>, greater<int> > p;
		c=0;
		for (i=0; i<n; i++) {
			cin >> x;
			p.push(x);								
		}
		while ((signed)p.size() > 1) {
			x  = p.top(), p.pop();					
			x += p.top(), p.pop();
			p.push(x);								
			c += x;									
		}
		cout << c << endl;
	}
}