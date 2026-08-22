#include<bits/stdc++.h>;
using namespace std;
#define ll long long

 main(){
    ll t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++) cin>>arr[i];
        
        multiset<int> ms;
        for (ll i = 0; i < n; i++)
        {
           if(arr[i]==1){
            ms.insert(arr[i]);
           }
           else if(ms.find((arr[i]-1))!=ms.end()){
            ms.insert(arr[i]);
           }
        }


        cout<<ms.size()<<endl;
        
    }
    
    return 0;
}