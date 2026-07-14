#include<bits/stdc++.h>;
using namespace std;
#define ll long long
int main(){
    ll t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        vector<ll> v(n+2);
        map<ll,ll> mp;
        
        for (ll i = 1; i <= n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        bool isSorted=true;

        for (ll i = 1; i <n; i++)
        {
            if(v[i]>=v[i+1]){
              isSorted=false;
              break;
             }
        }
        

        for (ll i = 1; i <=n; i++)
        {
            

            ll add=v[i]-i;
            v[i]=i;
            v[i+1]=v[i+1]+add;
        }
        
       
        if(mp.size()==1||isSorted){
            cout<<"YES"<<endl;
        }
        else{
            if(v[n+1]>0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
        


        
    }
    
    return 0;
}