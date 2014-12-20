#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int s[100001], i;
	for(i=0;cin >> s[i];i++);
	sort(s,s+i);
	for (i-=1;i>=0;i--)
		cout << s[i] << ' ';
}