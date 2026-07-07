#include<bits/stdc++.h>;
using namespace std;
#define ll long long

const int MOD=1e9+7;

int power(int x,int n){

    ll ans = 1%MOD;
   while (n)
   {
      if(n&1){
        ans=(1LL * ans%MOD  * x%MOD)%MOD;
      }
      x=(1LL * x%MOD * x%MOD)%MOD;
      n>>=1;
   }
   
   return ans;
}
int main(){
    int t; cin>>t;
    while(t--){
        int x,n; cin>>x>>n;

        cout<<power(x,n)<<endl;
    }

    
    return 0;
}