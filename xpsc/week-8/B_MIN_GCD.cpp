#include<bits/stdc++.h>;
using namespace std;
#define ll long long 

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n),g;
        
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        ll min=v[0];
        
        for (int i = 1; i < n; i++)
        {
            if(v[i]%min==0){
                g.push_back(v[i]);
            }
        }

        ll gcd=0;
        for (int i = 0; i <g.size(); i++)
        {
           gcd=__gcd(gcd,g[i]);
        }
        

       if(gcd==min) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
        
        
    }
    return 0;
}