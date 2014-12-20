#include <iostream>
using namespace std;

int main ()  {
	int h, m;
	cin >> h >> m;
	if (h>7 || h==7 && m>=30)  {
		if (h<17)
			cout << "At School";
		else 
			cout << "Off School";
	}
	else 
		cout << "Off School";
}