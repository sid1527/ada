#include<iostream>
using namespace std;

int main()
{
	int a[20],n,i,j,min;
	cout<<"\nEnter the size of array\n";
	cin>>n;
	cout<<"\nEnter the elements of array\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<=n-2;i++)
	{
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	cout<<"\nThe sorted array is\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	return 0;
}
