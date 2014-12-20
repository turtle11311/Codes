#include <cstdio>
#include <cstring>
using namespace std;

int main () {
	char s[12]={};
	int tc=1;
	while (scanf("%s", s), strcmp(s,"#")) {
		if (!strcmp(s,"HELLO"))
			printf("Case %d: ENGLISH\n", tc++);
		else if (!strcmp(s,"HOLA"))
			printf("Case %d: SPANISH\n", tc++);
		else if (!strcmp(s,"HALLO"))
			printf("Case %d: GERMAN\n", tc++);
		else if (!strcmp(s,"BONJOUR"))
			printf("Case %d: FRENCH\n", tc++);
		else if (!strcmp(s,"CIAO"))
			printf("Case %d: ITALIAN\n", tc++);
		else if (!strcmp(s,"ZDRAVSTVUJTE"))
			printf("Case %d: RUSSIAN\n", tc++);
		else
			printf("Case %d: UNKNOWN\n", tc++);
	}
}
