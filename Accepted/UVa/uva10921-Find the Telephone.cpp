#include <cstdio>
#include <cctype>
using namespace std;

char check(char ch) {
	if (ch>='A' && ch<='C')
		return '2';
	else if (ch>='D' && ch<='F')
		return '3';
	else if (ch>='G' && ch<='I')
		return '4';
	else if (ch>='J' && ch<='L')
		return '5';
	else if (ch>='M' && ch<='O')
		return '6';
	else if (ch>='P' && ch<='S')
		return '7';
	else if (ch>='T' && ch<='V')
		return '8';
	else if (ch>='W' && ch<='Z')
		return '9';
}
int main () {
	char ch;
	while (scanf("%c", &ch)!= EOF) {
		if (isalpha(ch))
			printf("%c", check(ch));
		else
			printf("%c", ch);
	}
}