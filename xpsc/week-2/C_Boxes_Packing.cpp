#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int n; cin>>n;
    map<ll,ll> mp;
    for (int i = 0; i < n; i++)
    {
       ll x; cin>>x;
       mp[x]++;
    }

    ll ans=0;
     for(auto item:mp){
        ans=max(ans,item.second);
     }

     cout<<ans<<endl;

    
    
    return 0;
}