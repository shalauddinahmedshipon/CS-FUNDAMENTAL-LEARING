#include<bits/stdc++.h>;
using namespace std;

class Solution {
public:
int vis[201][201];
bool isCaptured;
vector<pair<int,int>> dir={{0,1},{0,-1},{1,0},{-1,0}};
vector<pair<int,int>> v;


bool valid(int i,int j,int n,int m){
if(i<0||i>=n||j<0||j>=m) return false;
return true;
}

    void dfs(int si,int sj,vector<vector<char>>& board){
      vis[si][sj]=true;
      v.push_back({si,sj});
      if(si==0||si==board.size()-1||sj==0||sj==board[0].size()-1){
        isCaptured=false;
      }
      for(int i=0;i<4;i++){
       int ci=si+dir[i].first; 
       int cj=sj+dir[i].second;
       if(valid(ci,cj,board.size(),board[0].size())&&!vis[ci][cj]&&board[ci][cj]=='O'){
                     dfs(ci,cj,board);
       } 
      }
    }

      void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m=board[0].size();

        memset(vis,false,sizeof(vis));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&board[i][j]=='O'){
                    isCaptured=true;
                    dfs(i,j,board);
                    if(!isCaptured){
                      v.clear();
                    }else{
                        for(auto x: v){
               board[x.first][x.second]='X';
        }
                    }
                } 
            }
        }
        

    }


};

