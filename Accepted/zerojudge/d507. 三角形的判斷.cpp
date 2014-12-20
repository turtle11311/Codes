#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main () {
	string t[3]={"acute triangle","right triangle","obtuse triangle"};
	long long s[3], i;
	for (i=0;i<3;i++)
		cin >> s[i];
	sort(s,s+3);
	if(s[0]*s[0]+s[1]*s[1]>s[2]*s[2])
		cout << t[0] << endl;
	if(s[0]*s[0]+s[1]*s[1]==s[2]*s[2])
		cout << t[1] << endl;
	if(s[0]*s[0]+s[1]*s[1]<s[2]*s[2])
		cout << t[2] << endl;
}
