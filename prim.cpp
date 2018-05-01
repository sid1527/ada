#include<iostream>
using namespace std;

int cost[10][10],i,j,k,n,u,v,visited[10]={0};

int main()
{
	int c,min;
	cout<<"Enter the number of vertices\n";
	cin>>n;
	cout<<"Enter the adjacency matrix\n";
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		cin>>cost[i][j];
		if(cost[i][j]==0)
		cost[i][j]=999;
	}
	cout<<"Order of visited vertices\n";
	i=1;
	v=1;
	cout<<v<<"\t";
	visited[v]=1;
	while(i<n)
	{
		min=999;
		for(k=1;k<=n;k++)
		{
			if(visited[k]==1)
			v=k;
		for(j=1;j<=n;j++)
		if(cost[v][j]<min && visited[j]==0)
		{
			min=cost[v][j];
			u=j;
		}
		}
		cost[v][u]=cost[u][v]=999;
		v=u;
		cout<<v<<"\t";
		i++;
		visited[v]=1;
	}
	return 0;
}
