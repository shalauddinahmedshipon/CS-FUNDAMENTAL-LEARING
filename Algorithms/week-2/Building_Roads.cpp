#include<bits/stdc++.h>;
using namespace std;

vector<int> adj_list[100001];
bool vis[100001];

void dfs(int src){
vis[src]=true;
for(int child:adj_list[src]){
    if(!vis[child])
       dfs(child);
}
}


int main(){ 
    int n,m; 
    cin>>n>>m;
    int cnt=0;
    memset(vis,false,sizeof(vis));

    for(int i=0;i<m;i++){
     int a,b;
     cin>>a>>b;
     adj_list[a].push_back(b);
     adj_list[b].push_back(a);
    }
        
     vector<int> v;
     for(int i=1;i<=n;i++){
        if(!vis[i]){
            v.push_back(i);
            cnt++;
            dfs(i);
        }
            
        }
               
    cout<<cnt-1<<endl;
    if(!v.empty()){
     for (int i = 0; i < v.size()-1; i++)
    {
       cout<<v[i]<<" "<<v[i+1]<<endl;
    }
    }
    
    
    return 0;
}