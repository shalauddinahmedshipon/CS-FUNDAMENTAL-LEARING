#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while (t--)
    {
    vector<ll> v(3);
    
    for (int i = 0; i < 3; i++)
    {
        cin>>v[i];
    }
    

    sort(v.begin(),v.end());
    while (v[0]+v[1]<v[2])
    {
        v[2]=(v[0]+v[1]);
        sort(v.begin(),v.end());

    }
    
    
    cout<<(v[2]-v[0])<<endl;
    }
    
    return 0;
}