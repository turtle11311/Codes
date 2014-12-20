#include <iostream>
using namespace std;

int main () {
	int A[65537]={}, B[65537]={};
	int n, i, ans;
	while (cin >> n) 
		A[n/65536]++, B[n%65536]++;
	for (i=1;i<=65536;i++)
		if (A[i]%3)
			ans=i*65536;
	for (i=1;i<=65536;i++)
		if (B[i]%3)
			ans+=i;
	cout << ans << endl;
}