#include<bits/stdc++.h>;
using namespace std;

char grid[1001][1001];
bool vis[1001][1001];
vector<pair<int,int>> dir={{0,1},{0,-1},{1,0},{-1,0}};
int n,m;
vector<pair<int,int>> v;

bool valid(int i,int j){
    if(i<0||i>=n||j<0||j>=m) return false;
    return true;
}

void dfs(int si,int sj){
vis[si][sj]=true;
v.push_back({si,sj});
for(int i=0;i<4;i++){
    int ci=si+dir[i].first;
    int cj=sj+dir[i].second;
    if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]=='.')
       dfs(ci,cj);
}
}

int main(){  
    cin>>n>>m;

    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            grid[i][j]=x;
        }

    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    
     dfs(si,sj);
    
     bool flag=false;
     for(auto item:v){
        if(item.first==di&&item.second==dj){
            flag=true;
            break;
        }
     }

     if(flag) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
  
    return 0;
}