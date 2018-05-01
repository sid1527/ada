#include<iostream>
using namespace std;

int a[10][10],b[10],n;

void dfs(int v)
{
	int i;
	b[v]=1;
	for(i=1;i<=n;i++)
	{
		if(a[v][i]==1 && b[i]==0)
		{
			cout<<"\nEdge from "<<v<<" -> "<<i;
			dfs(i);
		}
	}
}

int main()
{
	int count=0;
	cout<<"Enter the number of vertices\n";
	cin>>n;
	cout<<"\nEnter the adjacency matrix\n";
	for(int i=1;i<=n;i++)
	{
		b[i]=0;
		for(int j=1;j<=n;j++)
		cin>>a[i][j];
	}
	dfs(1);
	for(int i=1;i<=n;i++)
	{
		if(b[i]==1)
		count++;
	}
	if(count==n)
	cout<<"\nGraph is connected\n";
	else
	cout<<"\nGraph is disconnected\n";
	return 0;
}
