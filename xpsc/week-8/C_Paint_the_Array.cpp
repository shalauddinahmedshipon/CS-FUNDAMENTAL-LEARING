#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        ll g1=0,g2=0;

        for(int i=0;i<n;i+=2){
            g1=__gcd(g1,v[i]);
        }

        for(int i=1;i<n;i+=2){
            g2=__gcd(g2,v[i]);
        }

        ll ans=0;

        bool flg1=true,flg2=true;

        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
              if(v[i]%g2==0){
                flg2=false;
              }
            }else{
              if(v[i]%g1==0){
                flg1=false;
              }
            }
        }

        if(flg1){
            ans=g1;
        }
        else if(flg2){
            ans=g2;
        }
        
        cout<<ans<<endl;
        

    }
    return 0;
}