#include <iostream>
using namespace std;

int main () {
	long long int n, i;
	char ans[60];
	while (cin >> n,n>=0) {
		if (n==0) {cout << 0 << endl;continue;}
		for (i=0;i<60;i++)
			ans[i]=' ';
		for (i=0;n != 0;n/=3,i++)
			ans[i]=n%3+'0';
		for (i-=1;i>=0;i--)
			cout << ans[i];
		cout << endl;
	}
}