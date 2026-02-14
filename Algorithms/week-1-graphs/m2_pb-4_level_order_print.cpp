#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[100005];
bool vis[100005];
int level[100005];




void bfs(int s){
queue<int> q;
q.push(s);
vis[s]=true;
level[s]=0;



while(!q.empty()){
    int p=q.front();
    q.pop();

for(auto child: adj_list[p]){
    if(!vis[child]){
        q.push(child);
        vis[child]=true;
        level[child]=level[p]+1;
        
    }
}


}

}

int main(){
    int n,e;
    cin>>n>>e;

    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    

    while (e--)
    {
        int a,b;
        cin>>a>>b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
       
    }


    int l;
    cin>>l;
    bfs(0);
    vector<int> v;

  for (int i = 0; i < sizeof(level)/sizeof(level[0]); i++)
  {
    if(l==level[i]) v.push_back(i);
  } 

  reverse(v.begin(),v.end());

  for (int x:v)
  {
    cout<<x<<" ";
  }
  
  
    
    return 0;
}