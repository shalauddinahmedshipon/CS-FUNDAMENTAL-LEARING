#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
    
        map<ll,ll> mp;
        for(int i=0;i<n;i++){
         ll x; cin>>x;
         mp[x]++;
        }

        
        
        
        int mxItem=mp.rbegin()->first;
        
        if(mp.size()==1){
            cout<<"Yes"<<endl;
        }
        else if(mp.size()>=2){
            bool flag=true;

            for(auto item:mp){
                if(item.first!=mxItem&&item.second>1){
                    flag=false;
                    break;
                }
            }

            if(flag) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        
    }
    return 0;
}