#include<bits/stdc++.h>;
using namespace std;
class Solution {
public:
int level[101][101];
vector<pair<int,int>> dir={{0,1},{0,-1},{1,0},{-1,0},{-1,1},{1,1},{-1,-1},{1,-1}};



bool valid(int i,int j,int n){
if(i<0||i>=n||j<0||j>=n) return false;
return true;
}

   

    void bfs(int si,int sj,vector<vector<int>>& grid){
        queue<pair<int,int>> q;
        q.push({si,sj});
        level[si][sj]=1;
        while(!q.empty()){
         pair<int,int> par = q.front();
         q.pop();
         for(int i=0;i<8;i++){
            int ci=par.first+dir[i].first;
            int cj=par.second+dir[i].second;
            if(valid(ci,cj,grid.size())&&level[ci][cj]==-1&&grid[ci][cj]==0){
              q.push({ci,cj});
              level[ci][cj]=level[par.first][par.second]+1;
            }
         }
        }

    }

     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        memset(level,-1,sizeof(level));

        if(grid[0][0]==0){
            bfs(0,0,grid);
        }
        
    return level[n-1][n-1];
    }


};