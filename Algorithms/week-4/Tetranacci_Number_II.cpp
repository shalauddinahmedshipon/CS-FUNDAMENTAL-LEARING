#include<bits/stdc++.h>;
using namespace std;
long long int dp[65];

int main(){
    int n;
    cin>>n;
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    dp[3]=2;
    for (int i = 4; i <= n; i++)
    {
       dp[i]=dp[i-4]+dp[i-3]+dp[i-2]+dp[i-1];
    }
    
    cout<<dp[n];
    return 0;
}