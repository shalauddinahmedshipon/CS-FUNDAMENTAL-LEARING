#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[100005];
bool vis[100005];
int level[100005];
int parent[100005];



void bfs(int s){
queue<int> q;
q.push(s);
vis[s]=true;
level[s]=1;
parent[s]=-1;


while(!q.empty()){
    int p=q.front();
    q.pop();

for(auto child: adj_list[p]){
    if(!vis[child]){
        q.push(child);
        vis[child]=true;
        level[child]=level[p]+1;
        parent[child]=p;
    }
}


}

}

int main(){
    int n,e;
    cin>>n>>e;

    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));

    while (e--)
    {
        int a,b;
        cin>>a>>b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
       
    }

    bfs(1);

    if(level[n]!=-1){
     cout<<level[n]<<endl;

    vector<int> v;
    int node = n;

    while (node!=-1)
    {
      v.push_back(node);
      node=parent[node];
    }
    
    reverse(v.begin(),v.end());

    for (int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }

    
    
    
    
    return 0;
}