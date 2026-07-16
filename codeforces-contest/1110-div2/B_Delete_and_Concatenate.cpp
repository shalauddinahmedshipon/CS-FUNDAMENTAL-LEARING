#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
     ll n,k; cin>>n>>k;
     vector<ll> v(n);
     
     for (ll i = 0; i < n; i++)
     {
        cin>>v[i];
     }

     if(v.size()==1){
        cout<<v[0]-k<<endl;
        continue;
     }

     sort(v.rbegin(),v.rend());

     ll score=0,l=0,r=n-1;

     while (l<=r)
     {
        if(v[r]<=k){
            score+=v[l];
            l++; r--;
        }
        else{
            score+=v[l];
            l++;
        }
        score-=k;
     }
     
    


     
     cout<<score<<endl;

    }
    return 0;
}