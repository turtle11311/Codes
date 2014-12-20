#include <iostream>
using namespace std;

int main ()  {
	int n, c=1, y;
	cin >> n;
	while (n--)  {
		cin >> y;
		if (y%4 == 0 && y%100 !=0 || y%400 == 0)
			cout << "Case " << c << ": a leap year" << endl;
		else
			cout << "Case " << c << ": a normal year" << endl;
		c++;
	}
}