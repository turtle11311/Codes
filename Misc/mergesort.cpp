#include <cstdio>
using namespace std;

void sort(int a[], int left, int right)
{
	int mid=(left+right)/2;
	int length=right-left+1;
	if(length<=1)
		return ;
	sort(a, left, mid);
	sort(a, mid+1, right);
	int *tmp=new int[length];
	int i=left;
	int j=mid+1;
	for(int k=0;k<length;k++)
	{
		if(i>mid)
			tmp[k]=a[j], j++;
		else if(j>right)
			tmp[k]=a[i], i++;
		else if(a[i]>a[j])
			tmp[k]=a[j], j++;
		else
			tmp[k]=a[i], i++;
	}
	for(int k=0;k<length;k++)
		a[k+left]=tmp[k];
	delete [] tmp;
}

int main ()
{
	int a[200];
	int i=0;
	while(scanf("%d", &a[i]), a[i])
		i++;
	sort(a, 0, i-1);
}