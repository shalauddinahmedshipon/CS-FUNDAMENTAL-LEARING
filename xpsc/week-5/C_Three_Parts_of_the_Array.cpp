#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    ll l=0,r=n-1,sum1=v[l],sum2=v[r],ans=1e9;


    while (l<r)
    {
        if(sum1==sum2){
            ans=sum1;
            l++;r--;
            if(l==r) break;
            sum1+=v[l];sum2+=v[r];
        }
        else if(sum1<sum2){
            l++;
            sum1+=v[l];
        }
        else if(sum1>sum2){
            r--;
            sum2+=v[r];
        }
        

        
    }
    
    if(ans==1e9) cout<<0<<endl;
    else cout<<ans<<endl;
    
    
    return 0;
}