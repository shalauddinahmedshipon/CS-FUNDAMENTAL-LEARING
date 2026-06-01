#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   ll n,k;
   cin>>n>>k;
   vector<ll> v(n);
   for (int i = 0; i < n; i++)
   {
    cin>>v[i];
   }

   multiset<ll> ml;
   int l=0,r=0;
   ll ans=0;

   while (r<n)
   {
    ml.insert(v[r]);
    ll mn=*ml.begin(),mx=*ml.rbegin();
    if(mx-mn<=k){
         ans+=r-l+1;
    }
    else{
       while (l<=r)
       {
         mn=*ml.begin(),mx=*ml.rbegin();
         if(mx-mn<=k){
           break;
         }else{
            ml.erase(ml.find(v[l]));
            l++;
         }
       }
       mn=*ml.begin(),mx=*ml.rbegin();
       if(mx-mn<=k){
         ans+=r-l+1;
       }
       
    }
    r++;
   }
   
    cout<<ans<<endl;
    return 0;
}