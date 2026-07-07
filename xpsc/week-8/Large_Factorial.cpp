#include<bits/stdc++.h>;
using namespace std;
#define ll long long

ll Mod=1e9+7;

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll ans=1;
        for(int i=1;i<=n;i++){
            ans=((ans%Mod)*(i%Mod))%Mod;
        }

        cout<<ans<<endl;
    }
    return 0;
}