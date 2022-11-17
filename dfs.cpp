#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex){
  //Take action on vertex after enterning the vertex.
	cout<< vertex <<endl;
	vis[vertex] =true;
	for(int child : g[vertex]){
		cout<<"parent"<< vertex << "   child "<< child <<endl;
		//Take action on child before.
		// entering the child node.
		if(vis[child]) continue;
		dfs(child);
		//Take action on child after exiting child node.
	}
	//Take action on vertex before exiting the vertex.
}
int main()
{
	int n,m;
	cin>> n >> m;
	for(int i=0;i< 9;++i)
	{
		int v1,v2;
		cin>>v1>>v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	dfs(n);
}