#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t ;cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        sort(v.rbegin(),v.rend());
        
        vector<ll> preSum(n);
        preSum[0]=v[0];
        for (int i = 1; i < n; i++)
        {
            preSum[i]=v[i]+preSum[i-1];
        }

        ll mxSum=0;
        
        for (int i = 0; i < n; i++)
        {
            ll sum=(preSum[i]*(n-i-1))+((preSum[n-1]-preSum[i])*(i+1));

            mxSum=max(sum,mxSum);
        }

        cout<<mxSum<<endl;
        
        

        
    }
    
    return 0;
}