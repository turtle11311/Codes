#include <iostream>
using namespace std;

int main () {
	int n, i;
	long long f[100]={1,1,2,3,5,8};
	for (i=6;i<100;i++)
		f[i]=f[i-1]+f[i-2];
	while (cin >> n)
		cout << f[n] << endl;
}
