#include<iostream>
using namespace std;
int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low+1;
	int j=high;
	while(i<j)
	{
		while(a[i]<pivot)
		i++;
		while(a[j]>pivot)
		j--;
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	
	a[low]=a[j];
	a[j]=pivot;
	
	return j;
}
int quick(int a[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(a,low,high);
		quick(a,low,pi-1);
		quick(a,pi+1,high);
	}
	return 0;
}
int main()
{
	int a[25],n,i;
	cout<<"\nEnter the size of array\n";
	cin>>n;
	cout<<"\nEnter the elements\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	quick(a,0,n-1);
	cout<<"\nThe sorted array is\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	return 0;
}
