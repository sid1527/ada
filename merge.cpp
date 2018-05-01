#include<iostream>
using namespace std;

void merge(int a[],int low,int mid,int high)
{
	int  i,j,k=0;
	int n1 = mid-low+1;
	int n2 = high-mid;
	
	int l[n1],r[n2];
	
	for(i=0;i<n1;i++)
	{l[i]=a[low+i];}
	for(j=0;j<n2;j++)
	{r[j]=a[mid+1+j];}
	
	i=0;j=0;k=low;
	
	while(i<n1 && j<n2)
	{
		if(l[i] <= r[j])
		{
			a[k]=l[i];
			i++;
		}
		else
		{
			a[k]=r[j];
			j++;
		}
		k++;
	}
	
	while(i<n1)
	{
		a[k]=l[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=r[j];
		j++;
		k++;
	}
}

int mergesort(int a[],int low,int high)
{
	if(low<high)
	{
		int m=(low+high-1)/2;
	
		mergesort(a,low,m);
		mergesort(a,m+1,high);
	
		merge(a,low,m,high);
	}
}

int main()
{
	int a[25],n,i;
	cout<<"\nEnter the size of the array\n";
	cin>>n;
	cout<<"\nEnter the elements of the array\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	mergesort(a,0,n-1);
	cout<<"\nThe sorted array is\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	return 0;
}
