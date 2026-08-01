#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cs=1;
    while (1)
    {
     ll n,q;
    cin>>n>>q;
   
    if(n==0 and q==0) break;


     cout<<"CASE# "<<cs<<":\n";
     cs++;
   
      vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    sort(v.begin(),v.end());
    
    while (q--)
    {
        
        ll x; cin>>x;

        auto it= lower_bound(v.begin(),v.end(),x);

        if(it==v.end()){
           cout<<x<<" not found"<<endl;;
        }
        else if(*it!=x){
             cout<<x<<" not found"<<endl;
        }
        else{
            cout<<x<<" found at "<<it-v.begin()+1<<"\n";
        }
        



    }
    
         
    }
    
   

    return 0;
}