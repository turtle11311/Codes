#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int a[1001][1001];

int main () { 
	string s1, s2;
	int i, j,tx=1;
	while (getline(cin,s1),	getline(cin,s2)) {
 		s1=" "+s1, s2=" "+s2;
		for (i=0;i<101;i++)
			for (j=0;j<101;j++)
				a[i][j]=0;
		 for (i=1;i<s1.size();i++)
			for (j=1;j<s2.size();j++) {
				if (s1[i]==s2[j])
					a[i][j]=a[i-1][j-1]+1;
				else
					a[i][j]=max(a[i-1][j],a[i][j-1]);
			}			
		cout << a[i-1][j-1] << endl;
	}
}
