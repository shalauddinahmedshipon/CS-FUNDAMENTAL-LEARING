#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        ll l=0, r=n-1;
        bool flag=true;

        ll mn=INT_MAX,mx=0;
       
        while (l<=r)
        {
            if(v[l]==v[r]){

            }
            else if(abs(v[l]-v[r])==2){
              ll x=min(v[r],v[l]);
              mn=min(mn,x);
              mx=max(mx,x);
            
            }
            else{
                flag=false;
                break;
            }

            l++; r--;
        }


        if(flag){
           if(mx-mn>1){
            cout<<"No"<<endl;
           }
           else cout<<"Yes"<<endl;
        } 
        else cout<<"No"<<endl;
        
        
    }
    
    return 0;
}