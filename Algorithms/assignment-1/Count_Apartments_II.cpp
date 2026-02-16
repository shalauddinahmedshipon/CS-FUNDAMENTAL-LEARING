#include<bits/stdc++.h>;
using namespace std;

 char grid[1005][1005];
 bool vis[1005][1005];
 vector<pair<int,int>> s={{-1,0},{1,0},{0,-1},{0,1}};
 vector<int> ac;
 int n,m;
 int cnt =0;

bool valid(int i,int j){
   
if(i<0||i>=n||j<0||j>=m) return false;
 return true;
}

void dfs(int si,int sj){
cnt++;
vis[si][sj]=true;
for (int i = 0; i < 4; i++)
{
    int ci=si+s[i].first;
    int cj=sj+s[i].second;
    if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]!='#'){
      dfs(ci,cj);
    }
}

}

int main(){
   
    cin>>n>>m;
   
    memset(vis,false,sizeof(vis));

    for (int i = 0; i <n; i++)
    {
       for (int j= 0; j <m; j++)
       {          
          cin>>grid[i][j];
       }
       
    }

   

    for (int i = 0; i <n; i++)
    {
       for (int j= 0; j <m; j++)
       {
         if(!vis[i][j]&&grid[i][j]=='.'){
            dfs(i,j);
            ac.push_back(cnt);
            cnt=0;
         } 
        
       }
       
    }
    
    

   sort(ac.begin(),ac.end());
   if(ac.size()==0){
    cout<<0<<endl;
   }else{
 for (int x:ac)
   {
    cout<<x<<" ";
   }
   }
  
   
  

    return 0;
}