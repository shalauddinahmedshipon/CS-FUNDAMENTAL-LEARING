#include<bits/stdc++.h>
using namespace std;
char grid[1001][1001];
bool vis[1001][1001];
int level[1001][1001];
pair<int,int> parent[1001][1001];

vector<pair<int,int>> dir={{0,1},{0,-1},{1,0},{-1,0}};
int n,m;


bool valid(int i,int j){
    if(i<0||i>=n||j<0||j>=m) return false;
    return true;
}


void bfs(int si,int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;
    level[si][sj]=0;
    parent[si][sj]={-1,-1};

    while(!q.empty()){
    pair<int,int> p=q.front();
    q.pop();
    int pi=p.first;
    int pj=p.second;
    for(int i=0;i<4;i++){
    int ci=pi+dir[i].first;
    int cj=pj+dir[i].second;
    if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]!='#'){
       q.push({ci,cj});
       vis[ci][cj]=true;
       level[ci][cj]=level[pi][pj]+1;
       parent[ci][cj]={pi,pj};
    }
    }
    }

}




int main(){  
    cin>>n>>m;

    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parent,(-1,-1),sizeof(parent));
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            grid[i][j]=x;
        }

 
    int si,sj,di,dj;
    
     for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
             if(grid[i][j]=='R'){
               si=i;
               sj=j;
             }
             if(grid[i][j]=='D'){
                di=i;
                dj=j;
             }
            
        }

   bfs(si,sj);
   vector<pair<int,int>> v;
   pair<int,int> node = {di,dj};

   while(node.first!=-1&&node.second!=-1){
      v.push_back({node.first,node.second});
      node = parent[node.first][node.second];
   }


  for (auto x:v)
  {
    if(grid[x.first][x.second]=='.'){
        grid[x.first][x.second]='X';
    }
   
  }


   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
            cout<<grid[i][j];       
        }
        cout<<endl;
   }
        
  
   
  
    return 0;
}