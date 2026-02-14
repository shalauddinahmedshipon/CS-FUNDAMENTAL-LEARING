#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,e;
    cin>>n>>e;
    int adj_mat[n][n];
    memset(adj_mat,0,sizeof(adj_mat));

    // for (int i = 1; i <= n; i++)
    //     for (int j = 1; j <=n; j++)