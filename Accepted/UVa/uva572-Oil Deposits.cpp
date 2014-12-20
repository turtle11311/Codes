#include <iostream>
using namespace std;

char oil[100][100];
int m, n;

void clear (int x, int y) {
	int x1, y1, i;
	int dx[8]={-1,-1,-1,0,0,1,1,1};
	int dy[8]={-1,0,1,-1,1,-1,0,1};
	oil[x][y]='*';
	for (i=0;i<8;i++) {
		x1 = x + dx[i];
		y1 = y + dy[i];
		if (x1>=0 && x1<m && y1>=0 && y1<n && oil[x1][y1]=='@')
			clear(x1,y1);
	}
}


int main () {
	int ans;
	int i, j;
	while (cin >> m >> n,m) {
		for (i=0;i<m;i++)
			for (j=0;j<n;j++)
				cin >> oil[i][j];
		ans=0;
		for (i=0;i<m;i++)
			for (j=0;j<n;j++) {
				if (oil[i][j] == '@') {
					ans++;
					clear(i, j);}
			};
			cout << ans << endl;
	}
}