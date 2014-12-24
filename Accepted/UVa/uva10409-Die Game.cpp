#include <iostream>
#include <cstring>
using namespace std;


/*
   2
3  1  4
   5
*/
int main ()
{
	int up, north, west;
	int k;
	char str[10];
	while(cin >> k, k)
	{
		up=1, north=2, west=3;
		for(int i=0;i<k;i++)
		{
			int last_up=up;
			cin >> str;
			if(!strcmp(str, "north"))
			{
				up=7-north;
				north=last_up;
			}
			else if(!strcmp(str, "west"))
			{
				up=7-west;
				west=last_up;
			}
			else if(!strcmp(str, "south"))
			{
				up=north;
				north=7-last_up;
			}
			else if(!strcmp(str, "east"))
			{
				up=west;
				west=7-last_up;
			}
		}
		cout << up << endl;
	}
}
