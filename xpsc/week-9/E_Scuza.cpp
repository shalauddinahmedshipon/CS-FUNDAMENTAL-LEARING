#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int_fast32_t t; cin>>t;
    while (t--)
    {
        ll n,q; cin>>n>>q;
        vector<ll> v(n), preSum(n);

        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
        }

        preSum[0]=v[0];

        for (ll i = 1; i < n; i++)
        {
           preSum[i]=preSum[i-1]+v[i];
        }


        for (ll i = 1; i <n; i++)
        {
            if(v[i]<v[i-1]) v[i]=v[i-1];
        }

        while (q--)
        {
            ll x; cin>>x;
            if(x<v[0]){
                cout<<0<<" ";
            }
            else{

            auto it=upper_bound(v.begin(),v.end(),x);
            ll pos=it-v.begin()-1;

            ll ans=preSum[pos];



            cout<<ans<<" ";
            }

        }

    
        
       cout<<endl;

        
        

    }
    
    return 0;
}