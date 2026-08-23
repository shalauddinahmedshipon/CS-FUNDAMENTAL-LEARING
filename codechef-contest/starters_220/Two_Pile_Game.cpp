#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
        ll x,y; cin>>x>>y;
        ll n=x+y;
        bool alice,bob;
        if(y%2==0){
            alice=false,bob=true;
        }
        else{
            alice=true,bob=false;
        }

        if(n%2==0){
             if(bob){
               cout<<"Bob"<<endl;
             }
             if(alice){
               cout<<"Alice"<<endl;
             }
        }
        else{
            if(bob){
               cout<<"Alice"<<endl;
             }
             if(alice){
               cout<<"Bob"<<endl;
             }
        }
    }
    return 0;
}