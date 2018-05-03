#include<iostream>
using namespace std;

void dij(int n,int v,int cost[10][10],int dist[])
{
	int i,u,ne,j,visited[10]={0},min;
	for(i=1;i<=n;i++)
	dist[i]=cost[v][i];
	ne=1;
	while(ne<n)
	{
		min=999;
		for(j=1;j<=n;j++)
		if(dist[j]<min && visited[j]==0)
		{
			min=dist[j];
			u=j;
			visited[u]=1;
			ne++;
		}
		for(j=1;j<=n;j++)
		if((dist[u]+cost[u][j] < dist[j]) && visited[j]==0)
		dist[j]=dist[u]+cost[u][j];
	}
}

int main()
{
	int n,v,i,j,cost[10][10],dist[10];
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
	cout<<"Enter the source edge\n";
	cin>>v;
	dij(n,v,cost,dist);
	cout<<"Shortest path\n";
	for(i=1;i<=n;i++)
	if(i!=v)
	cout<<v<<" -> "<<i<<"\t"<<dist[i]<<"\n";
	return 0;
}
