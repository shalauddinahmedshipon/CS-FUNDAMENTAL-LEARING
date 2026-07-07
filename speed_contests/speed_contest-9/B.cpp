#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool check_kth_bit_on_or_off(ll n,ll k){
    return (n>>k)&1;
}

int main(){
    int t;
    cin>>t;
    while(t--){

        ll n;
       cin>>n;
     ll cnt=0;

     for (ll i = 0; i <=__lg(n); i++)
     {
       if(check_kth_bit_on_or_off(n,i)){
          cnt++;
       }
     }

     if(cnt%2==0) cout<<"EVEN"<<endl;
     else cout<<"ODD"<<endl;
    }
    
     

    return 0;
}