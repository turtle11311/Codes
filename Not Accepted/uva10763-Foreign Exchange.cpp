#include <iostream>
using namespace std;

void mergesort(int a[], int left, int right)
{
	int mid=(left+right)/2;
	int length=right-left+1;
	if(length<=1)
		return;
	mergesort(a, left, mid);
	mergesort(a, mid+1, right);
	int i=left;
	int j=mid+1;
	int *tmp=new int[length];
	for(int k=0;k<length;k++)
	{
		if(i>mid)
			tmp[k]=a[j], j++;
		else if(j>right)
			tmp[k]=a[i], i++;
		else if(a[i] < a[j])
			tmp[k]=a[i], i++;
		else
			tmp[k]=a[j], j++;
	}
	for(int k=0;k<length;k++)
		a[left+k]=tmp[k];
	delete [] tmp;
}

int main ()
{
	int k;
	int a[500], b[500];
	while(cin >> k && k)
	{
		for(int i=0;i<k;i++)
			cin >> a[i] >> b[i];
		mergesort(a, 0, k-1);
		mergesort(b, 0, k-1);
		bool success=true;
		for(int i=0;i<k;i++)
		{
			if(a[i]!=b[i])
			{
				success=false;
				break;
			}
		}
		cout << (success?"Yes\n":"No\n");
	}
}
