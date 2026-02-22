#include<bits/stdc++.h>;
using namespace std;


class Solution {
public:
int vis[11][11];
vector<pair<int,int>> dir={{0,1},{0,-1},{1,0},{-1,0}};

int res=0;
int sum;

bool valid(int i,int j,int n,int m){
if(i<0||i>=n||j<0||j>=m) return false;
return true;
}

    void dfs(int si,int sj,vector<vector<int>>& grid){
      vis[si][sj]=true;
      sum+=grid[si][sj]; 
      cout<<grid[si][sj]<<" ";
      for(int i=0;i<4;i++){
       int ci=si+dir[i].first; 
       int cj=sj+dir[i].second;
       if(valid(ci,cj,grid.size(),grid[0].size())&&!vis[ci][cj]&&grid[ci][cj]>0){
                     dfs(ci,cj,grid);
       } 
      }
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int n = grid.size();
        int m=grid[0].size();

        memset(vis,false,sizeof(vis));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&grid[i][j]>0){
                    sum=0;
                    dfs(i,j,grid);
                    res = max(res,sum);
                } 
            }
        }
        
        return res;
    }


};