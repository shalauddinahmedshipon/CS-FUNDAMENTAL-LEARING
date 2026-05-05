#include<bits/stdc++.h>;
using namespace std;
#define ll long long
int main(){
    int t ;
    cin>>t;
    while (t--)
    {
        ll n,w;
        cin>>n>>w;
        vector<int> bit(32,0),v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
            int x=log2(v[i]);
            bit[x]++;
        }

        ll ct=0;
        while (n)
        {
            ll temp=w; ll ans=0;
            for(int i=31;i>=0&&temp>=0;i--){
                if(bit[i]){
                    ll res = pow(2,i);
                    if(temp-res>=0){
                        temp=temp-res;
                        bit[i]--;
                        n--;
                        i++;
                    }
                }
            }
            ct++;
        }
        
        cout<<ct<<endl;
       
    }
    
    return 0;
}