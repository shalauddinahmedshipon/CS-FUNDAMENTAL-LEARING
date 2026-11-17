#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin>>v[i];
        }

        vector<int> diff(n+2,0);

        ll ans=0,add=0;

        for (int i = 1; i <= n; i++)
        {
            add=add+diff[i];
            ll current=v[i]+add;
            ll x=min(current,n-i);
            ans+=x;
            diff[i+1]+=1;
            diff[i+x+1]-=1;

        }

        cout<<ans<<endl;
        
        
    }
    return 0;
}