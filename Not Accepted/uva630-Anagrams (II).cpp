#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void string_sort(char str[], int left, int right)
{
	int mid=(left+right)/2;
	int length=right-left+1;
	if(length<=1)
		return;
	string_sort(str, left, mid);
	string_sort(str, mid+1, right);
	int i=left;
	int j=mid+1;
	char *tmp=new char[length];
	for(int k=0;k<length;k++)
	{
		if(i>mid)
			tmp[k]=str[j], j++;
		else if(j>right)
			tmp[k]=str[i], i++;
		else if(str[i]<str[j])
			tmp[k]=str[i], i++;
		else
			tmp[k]=str[j], j++;
	}
	for(int k=0;k<length;k++)
		str[left+k]=tmp[k];
	delete [] tmp;
}

int main ()
{
	int tc, n, k;
	char dictionary[50][50];
	char find[50][50];
	char tmp[50][50];
	char oldfind[50][50];
	cin >> tc >> ws;
	while(tc--)
	{
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> dictionary[i];
		for(int i=0;i<n;i++)
			strcpy(tmp[i], dictionary[i]), string_sort(tmp[i], 0, strlen(tmp[i])-1);
		k=0;
		while(cin >> find[k], strcmp(find[k], "END"))
			k++;
		for(int i=0;i<k;i++)
			strcpy(oldfind[i], find[i]);
		for(int i=0;i<k;i++)
		{
			bool is_notfound=true;
			cout << "Anagrams for: " << oldfind[i] << endl;
			string_sort(find[i], 0, strlen(find[i])-1);
			int cnt=1;
			for(int j=0;j<n;j++)
			{
				if(!strcmp(find[i], tmp[j]))
					printf("  %d) %s\n", cnt++, dictionary[j]), is_notfound=false;
			}
			if(is_notfound)
				printf("No anagrams for: %s\n", oldfind[i]);
		}
	}
}
