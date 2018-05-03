#include<iostream>
using namespace std;

int heapify(int a[],int n,int i)
{
	int largest = i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && a[l]>a[largest])
	largest=l;
	if(r<n && a[r]>a[largest])
	largest=r;
	if(largest != i)
	{
		int temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		heapify(a,n,largest);
	}
}

void heapsort(int a[], int n)
{
	for(int i=n/2-1;i>=0;i--)
	heapify(a,n,i);
	cout<<"Heapified list is \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
	for(int i=n-1;i>=0;i--)
	{
		int temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		heapify(a,i,0);
	}
}

int main()
{
	int n,a[10];
	cout<<"Enter size\n";
	cin>>n;
	cout<<"Enter the elements \n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	heapsort(a,n);
	cout<<"Sorted list is \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
	return 0;
}
