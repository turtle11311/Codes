#include <cstdio>
using namespace std;

inline double abs(double n)
{
	return n>0?n:-n;
}

int main ()
{
	int h, m;
	double ans;
	while(scanf("%d:%d", &h, &m), h || m)
	{
		ans=180-abs(180-abs(30*h-5.5*m));//ans=180-abs(180-abs(30*(h+m/60)-6*m))
		printf("%.3lf\n", ans);
	}
}
