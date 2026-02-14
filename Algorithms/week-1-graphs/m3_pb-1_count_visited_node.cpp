#include<bits/stdc++.h>
using namespace std;


vector<int> adj_list[100005];
bool vis[100005];


int res=0;

void dfs(int src){
res++;
vis[src]=true;
for(int child:adj_list[src]){
  if(!vis[child]){
    dfs(child);
  }  
}

}


int main(){
    int n,e;
    cin>>n>>e;
   
    

    memset(vis,false,sizeof(vis));

    while (e--)
    {
        int a,b;
        cin>>a>>b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
       
    }

    int src;
    cin>>src;
    dfs(src);

    cout<<res<<endl;
    
    
    return 0;
}