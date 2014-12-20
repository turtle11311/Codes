#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

void sort (int a[], int left, int right)
{
	int mid=(left+right)/2;
	int length=right-left+1;
	if(length<=1)
		return ;
	int st=rand()%length;
	swap(a[st+left], a[left]);
	int i=left+1;
	int j=right;
	while(true)
	{
		while(a[i]<=a[left])
			i++;
		while(a[j]>a[left])
			j--;
		if(i>j)
			break;
		swap(a[i], a[j]);
	}
	swap(a[j],a[left]);
	sort(a, left, j-1);
	sort(a, j+1, right);
}

int main ()
{
	srand(time(0));
	int a[200];
	int i=0;
	while(scanf("%d", &a[i]), a[i])
		i++;
	sort(a, 0, i-1);
}