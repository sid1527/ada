#include<iostream>
using namespace std;

int main()
{
	int cost[10][10],i,j,ne,n,qu[10]={0},front=0,rear=0,v,visit[10]={0},visited[10]={0};
	cout<<"\nEnter the number of vertices\n";
	cin>>n;
	cout<<"\nEnter the adjacency matrix\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		cin>>cost[i][j];
	}
	cout<<"\nEnter the initial vertice\n";
	cin>>v;
	cout<<"\nThe visited vertices are in order : \n";
	cout<<v<<"\t";
	visited[v]=1;
	ne=1;
	while(ne<n)
	{
		for(i=1;i<=n;i++)
		{
			if(cost[v][i]==1 && visited[i]==0 && visit[i]==0 )
			{
				visit[i]=1;
				qu[rear++]=i;
			}
		}
		v=qu[front++];
		cout<<v<<"\t";
		ne++;
		visit[v]=0;
		visited[v]=1;
	}
	return 0;
}
