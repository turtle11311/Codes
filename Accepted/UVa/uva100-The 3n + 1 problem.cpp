#include <iostream>
#include <algorithm>
using namespace std;

int f( int n ){
	if( n == 1 )
		return 1;
	else if( n % 2 )
		return f( 3*n+1 )+1;
	else
		return f( n/2 )+1;
}

int main () {
	int a, b, max_num, min_num, ans, n;
	while (cin >> a >> b) {
		max_num=max(a,b);
		min_num=min(a,b);
		for (ans=0,n=min_num;n<=max_num;n++)
			ans=max(ans, f(n));
		cout << a << ' ' << b << ' ' << ans << endl;
	}
}