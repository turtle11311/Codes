#include <iostream>
#include <cstdio>
using namespace std;

inline int abs(int n)
{
	return (n>0)?n:-n;
}

int main ()
{
	int tc, F, n;
	char ch;
	cin >> tc;
	while(tc--)
	{
		cin >> F >> n;
		int all=2*F-1;
		while(n--)
		{
			for(int i=1;i<=all;i++)
				{
				for(int j=1;j<=F-abs(F-i);j++)
					cout << F-abs(F-i);
				puts("");
				}
			if(n>0)
				puts("");
		}
		if(tc>0)
			puts("");
	}
}