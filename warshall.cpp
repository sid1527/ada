#include<iostream>
using namespace std;

int main()
{
	int n,a[10][10],i,j,k;
	cout<<"Enter the size of graph\n";
	cin>>n;
	cout<<"Enter the adjacency matrix\n";
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	cin>>a[i][j];
	for(k=1;k<=n;k++)
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	if(a[i][j]!=0 || (a[i][k]!=0 && a[k][j]!=0))
	a[i][j]=1;
	cout<<"Transitive matrix\n";
	for(i=1;i<=n;i++){
	for(j=1;j<=n;j++)
	cout<<a[i][j]<<"\t";
	cout<<"\n";}
	return 0;
}
