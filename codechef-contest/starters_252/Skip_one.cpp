#include<bits/stdc++.h>;
using namespace std;
#define ll long long


int main(){
    ll t; cin>>t;
    while (t--)
    {
        ll n,k; 
        cin>>n>>k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        ll sum=0, cnt=0,dis=0;
        for (ll i = 0; i < n; i++)
        {
            
            sum+=v[i];
            if(sum>k&&dis==0){
                sum-=v[i];
               if(dis==0){
                   dis++;
               } 
            }

            if(sum>k){
                break;
            }
            cnt++;
        }

        cout<<cnt<<endl;
        
        
    }
    
    return 0;
}