#include<bits/stdc++.h>;
using namespace std;

class Solution {
public:
int vis[201][201];
bool isBattle;
vector<pair<int,int>> dir={{1,0},{-1,0}};
int cnt=0;

bool valid(int i,int j,int n,int m){
if(i<0||i>=n||j<0||j>=m) return false;
return true;
}

    void dfs(int si,int sj,vector<vector<char>>& board){
      vis[si][sj]=true;
      if(sj!=0&&board[si][sj-1]!='.'){
         isBattle=false;
      }
      for(int i=0;i<2;i++){
       int ci=si+dir[i].first; 
       int cj=sj+dir[i].second;
       if(valid(ci,cj,board.size(),board[0].size())&&!vis[ci][cj]&&board[ci][cj]=='X'){
                     dfs(ci,cj,board);
       } 
      }
    }

      int countBattleships(vector<vector<char>>& board) {
        int n = board.size();
        int m=board[0].size();

        memset(vis,false,sizeof(vis));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&board[i][j]=='X'){
                     isBattle=true;
                    dfs(i,j,board);
                    if(isBattle) cnt++;
                   
                } 
            }
        }
        
     return cnt++;
    }


};
