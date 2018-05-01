#include<iostream>
using namespace std;

int main()
{
	int a[25],n,i,j;
	cout<<"\nEnter the size of array\n";
	cin>>n;
	cout<<"\nEnter the elements of array\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=1;i<n;i++)
	{
		int x=a[i];
		j=i-1;
		while(a[j]>x && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		j++;
		a[j]=x;
	}
	cout<<"\nThe sorted array is\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	return 0;
}
