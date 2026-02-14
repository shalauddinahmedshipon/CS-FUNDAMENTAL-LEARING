#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[100005];
bool vis[100005];
int level[100005];




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


    int q;
    cin>>q;

    cout<<adj_list[q].size()<<endl;
    
  
  
    
    return 0;
}