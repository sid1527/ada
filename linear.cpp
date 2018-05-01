#include<iostream>
using namespace std;
int search(int a[],int i,int n,int item)
{
	if(i>n)
	return -1;
	if(a[i]==item)
	return i;
	return search(a,i+1,n,item);
}
int main()
{
	int a[20],n,i,item;
	cout<<"\nEnter size\n";
	cin>>n;
	cout<<"\nEnter elements\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"\nEnter item to search\n";
	cin>>item;
	int temp=search(a,0,n-1,item);
	if(temp==-1)
	cout<<"Not Found";
	else
	cout<<"Found at "<<temp+1<<" pos";
	return 0;
}
