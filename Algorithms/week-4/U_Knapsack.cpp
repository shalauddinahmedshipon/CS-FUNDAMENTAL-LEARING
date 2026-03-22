#include<bits/stdc++.h>;
using namespace std;
int v[1005];
int w[55];
int dp[105][105];

int knapsack(int i,int max_weight){
if(i<0||max_weight<=0) return 0;
if(dp[i][max_weight]!=-1) return dp[i][max_weight];
if(w[i]<=max_weight){
int opt1=knapsack(i-1,max_weight-w[i])+v[i];
int opt2=knapsack(i-1,max_weight);
dp[i][max_weight]=max(opt1,opt2);
return dp[i][max_weight];
}
else{
dp[i][max_weight]=knapsack(i-1,max_weight);
return dp[i][max_weight];
}
}

int main(){
    int n,m;
    cin>>n>>m;

   for(int i=1;i<=n;i++)
   {
     int a,b;
     cin>>a>>b;
     w[i]=a;
     v[i]=b;
   }

   for (int i = 1; i <=n; i++)
   {
       for (int j = 1; j <=m; j++)
       {
        dp[i][j]=-1;
       }
       
   }
   
   cout<<knapsack(n,m)<<endl;
       
        
    return 0;
}