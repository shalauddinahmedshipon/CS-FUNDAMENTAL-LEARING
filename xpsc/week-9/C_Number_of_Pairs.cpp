#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while (t--)
    {
        ll n,l,r; cin>>n>>l>>r;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
          cin>>v[i];
        }

        sort(v.begin(),v.end());

        ll ans=0;

        for (ll i = 0; i < n; i++)
        {
            ll low=l-v[i],high=r-v[i];
            auto startingIterator=lower_bound(v.begin()+i+1,v.end(),low);
            ll startingPos=startingIterator-v.begin();
            auto endingIterator=upper_bound(v.begin()+i+1,v.end(),high);
            ll endingPos=endingIterator-v.begin()-1;

            ll range=endingPos-startingPos+1;

            ans+=range;
        }
        
        cout<<ans<<endl;
        
    }
    
    return 0;
}