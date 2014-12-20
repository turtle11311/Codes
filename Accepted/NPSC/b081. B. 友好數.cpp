#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int sof (int in) {
	int sum, i;
	double sq_i;
	sum=1;
	sq_i = sqrt((double)in);
	for (i=2;i*i<=in;i++) {
		if (in%i==0)
			sum += i+(in/i);
		if (sq_i==i)
			sum-=sq_i;}
	return sum;
}

int main () {
	int n, m, p;
	while (cin >> n, n) {
		 m = sof(n);
		 p = sof(m);
		 if (m == n)
			 cout << '=' << m << endl;
		 else if (p == n)
			 cout << m << endl;
		 else 
			 cout << 0 << endl;
	}
}