#include <iostream>
#include <cmath>
using namespace std;

int abs (int x) {
	return x > 0 ? x : -x ;
}

int main () {
	int n, i, m;
	while (cin >> n) {
		if (n==0) {cout << 0 << endl;continue;}
		m=abs(n);
		for (i=int(sqrt(double(m)));m%(i*i)!=0;i--);
		if (i!=1)	cout << i;
		if (m/(i*i)!=1)		cout << "_/" << m/(i*i);
		if (n<0)		cout << 'i';
		if (n==1)		cout << 1;
		cout << endl;
	}
}