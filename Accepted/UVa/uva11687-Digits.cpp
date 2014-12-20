#include <cstdio>
#include <cstring>
#include <string>
#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main () {
	int i, n;
	double len;
	string s;
	while (cin >> s) {
		if (s=="END") break;
		len=s.size();
		if (s=="1")
			printf("1\n");
		else {
			for(i=1;len!=0;i++) {
				if (len==1)
					break;
			if(ceil(log10(len))!=log10(len))
				len=ceil(log10(len));
			else
				len=log10(len)+1;
			}
			printf("%d\n", i+1);
		}
	}
}
