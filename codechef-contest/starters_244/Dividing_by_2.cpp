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

        int cnt=0;

        while (v[0]!=v[n-1])
        {
             v[n-1]=v[n-1]/2;
             cnt++;
             sort(v.begin(),v.end());
        }
        
        
        cout<<cnt<<endl;
        
        
        
    }
    return 0;
}