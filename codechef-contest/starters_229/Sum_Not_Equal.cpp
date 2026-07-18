#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        vector<pair<ll,ll>> arr(n);

        for (ll i = 0; i < n; i++)
        {
            ll x; cin>>x;
            arr[i]={x,i};
        }

        sort(arr.rbegin(),arr.rend());

        ll i=arr[0].second, j=arr[1].second, k=arr[n-1].second;
        if(arr[0].first+arr[1].first!=arr[n-1].first){
            cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    }
    
    return 0;
}