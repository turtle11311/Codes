#include <iostream>
#include <string>
using namespace std;

int main () {
	long long int n, i;
	char ans[60];
	while (cin >> n) {
		for (i=0;i<60;i++)
			ans[i]=' ';
		for (i=0;n != 0;n/=2,i++)
			ans[i]=n%2+'0';
		for (i-=1;i>=0;i--)
			cout << ans[i];
		cout << endl;
	}
}
