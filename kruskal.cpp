#include<iostream>
using namespace std;

int parent[10]={0};
int find(int i)
{
	while(parent[i])
	i=parent[i];
	return i;
}
int uni(int i,int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	return 0;
}

int main()
{
	int min,n,i,j,cost[10][10],ne=1,v,u,a,b,visited[10]={0},total=0;
	cout<<"Enter the no. of vertices\n";
	cin>>n;
	cout<<"Enter the adjacency matrix\n";
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		cin>>cost[i][j];
		if(cost[i][j]==0)
		cost[i][j]=999;
	}
	cout<<"The edges of minimum spanning tree are\n";
	while(ne<n)
	{
		min=999;
		for(i=1;i<n;i++)
		for(j=1;j<=n;j++)
		if(cost[i][j]<min)
		{
			min=cost[i][j];
			a=v=i;
			b=u=j;
		}
		u=find(u);
		v=find(v);
		if(uni(u,v))
		cout<<a<<"->"<<b<<"\t"<<min<<"\n";
		cost[a][b]=cost[b][a]=999;
		ne++;
		total+=min;
	}
	cout<<"total "<<total;
	return 0;
}
