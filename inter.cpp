#include<iostream>
using namespace std;

int inter(int a[],int low,int high,int item)
{
	if(low>high)
	return -1;
	int mid= low+((item-a[low])*(high-low)/(a[high]-a[low]));
	if(a[mid]==item)
	return mid;
	else if(a[mid]>item)
	return inter(a,low,mid-1,item);
	else
	return inter(a,mid+1,high,item);
}

int main()
{
	int a[25],n,item,i;
	cout<<"\nEnter the size of the array\n";
	cin>>n;
	cout<<"\nEnter the elements of the array\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"\nEnter the element to be searched\n";
	cin>>item;
	int temp=inter(a,0,n-1,item);
	if(temp==-1)
	cout<<"Item not found";
	else
	cout<<"Item found at position "<<temp+1;
	return 0;
}
