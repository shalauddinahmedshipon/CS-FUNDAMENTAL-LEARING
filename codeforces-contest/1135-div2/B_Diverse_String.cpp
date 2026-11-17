#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while (t--)
    {
        ll n,k; cin>>n>>k;
        string s; cin>>s;
        int cnt0=count(s.begin(),s.end(),'0');
        int cnt1=n-cnt0;
       
        ll x,y;
        x=max(cnt0,cnt1);
        x=min(x+k,n);
        y=n-x;
        ll ans=(x*(x+1)/2)+(y*(y+1)/2)+1;
        cout<<ans<<endl;
    }
    
    return 0;
}