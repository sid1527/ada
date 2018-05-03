#include<iostream>
using namespace std;

int max(int a,int b)
{
	return (a>b)?a:b;
}

int knapsack(int w,int wt[],int val[],int n)
{
	if(n==0||w==0)
	return 0;
	if(wt[n-1]>w)
	return knapsack(w,wt,val,n-1);
	else
	return max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));
}
int main()
{
	int n,w,val[10],wt[10],i;
	cout<<"Enter the number of elements\n";
	cin>>n;
	cout<<"Enter the value and weight of the corresponding elements\n";
	for(i=0;i<n;i++)
	cin>>val[i]>>wt[i];
	cout<<"Enter the capacity of the knapsack\n";
	cin>>w;
	int temp=knapsack(w,wt,val,n);
	cout<<"The final total value is "<<temp;
	return 0;
}
