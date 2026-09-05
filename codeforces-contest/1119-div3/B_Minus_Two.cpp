#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        vector<ll> v;
        ll cntOdd=0;
        for (ll i = 0; i < n; i++)
        {
            ll x; cin>>x;
            if(x%2==1){
                cntOdd++;
            }
            else{
                v.push_back(x);
            }
        }

        sort(v.begin(),v.end());

        ll cntEven=0;

        if(v.size()>1){
        for (ll i = 0; i < (v.size()-1); i++)
        {
            if(((v[i+1]-v[i])/2)%2==0){
              cntEven++;
              if(i==v.size()-2) cntEven++;
            }
        }
        }
      

        
        cout<<max(cntOdd,cntEven)<<endl;


        
    }
    
    return 0;
}