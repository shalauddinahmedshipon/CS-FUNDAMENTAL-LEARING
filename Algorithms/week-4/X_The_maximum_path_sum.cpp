#include<bits/stdc++.h>
using namespace std;
int mat[11][11];
int n,m;

int dfs(int si,int sj){
if(si==n-1&&sj==m-1){
return mat[si][sj];
}
else if(si==n+1||sj==m+1){
return -1000000;
}
int right=dfs(si,sj+1);
int down=dfs(si+1,sj);
return mat[si][sj]+max(right,down);
}

int main(){
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <m; j++)
       {
        cin>>mat[i][j];
       }
       
    }
    
    int res=dfs(0,0);
    cout<<res;
    
    return 0;
}