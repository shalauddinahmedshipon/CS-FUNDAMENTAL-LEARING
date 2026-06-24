#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        ll mn=v[0],mx=v[n-1],cnt=0;

        while (mx>mn)
        {
            mx=mx/2;
            cnt++;
            if(mx<=mn){
                break;
            }
        }

        if(mn>mx){
            mn=mn/2;
            cnt++;
        }
         
        for (int i = 1; i < n-1; i++)
        {
            if(v[i]!=mn){
                while(v[i]>mn){
                    v[i]=v[i]/2;
                     cnt++;
                    if(v[i]==mn) break;
                   
                }
            }
        }
        
        cout<<cnt<<endl;
        
        
        
    }
    return 0;
}