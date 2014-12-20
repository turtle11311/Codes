#include <cstdio>
#include <string>
#include <iostream>
#define MAXN 1005
using namespace std;

int main () {
	string s1, s2;
	int i, j, s1_length, s2_length;
	while(getline(cin, s1)) {
		getline(cin, s2);
		static int DP[MAXN][MAXN]={};
		s1_length=s1.size();
		s2_length=s2.size();
		s1='0'+s1,s2='0'+s2;
		for(i=1;i<=s1_length;i++)
			for(j=1;j<=s2_length;j++)
				if(s1[i]==s2[j])
					DP[i][j]=DP[i-1][j-1]+1;
				else
					DP[i][j]=max(DP[i-1][j],DP[i][j-1]);
		printf("%d\n", DP[s1_length][s2_length]);
	}
}