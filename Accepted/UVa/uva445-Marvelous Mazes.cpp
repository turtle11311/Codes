#include <cstdio>
#include <iostream>
using namespace std;

inline bool is_num(char ch)
{
	return (ch>='0' && ch<='9')?true:false;
}

int main ()
{
	char ch;
	int tc=0;
	while(ch=getchar(), ch!=EOF)
	{
		if(ch=='\n')
			tc=0,puts("");
		else if(is_num(ch))
			tc+=ch-'0';
		else
		{
			if(ch=='b')
				ch=' ';
			if(ch=='!')
				puts("");
			for(int i=0;i<tc;i++)
				printf("%c", ch);
			tc=0;
		}
	}
}
