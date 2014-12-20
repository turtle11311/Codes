#include <iostream>
#include <string>
using namespace std;

int main () { 
	int a[101][101];
	int n1[101], n2[101];
	int i, j, m, n,tx=1;
	while (cin >> m >> n, m && n) {
		for (i=0;i<101;i++)
			for (j=0;j<101;j++)
				a[i][j]=0;
		for (i=1;i<=m;i++) cin >> n1[i];
		for (i=1;i<=n;i++) cin >> n2[i];
		for (i=1;i<=m;i++)
			for (j=1;j<=n;j++) {
				if (n1[i]==n2[j])
					a[i][j]=a[i-1][j-1]+1;
				else
					a[i][j]=max(a[i-1][j],a[i][j-1]);
			}			
			cout <<"Twin Towers #" << tx++ << "\nNumber of Tiles : " << a[i-1][j-1] << endl << endl;
	}
}
