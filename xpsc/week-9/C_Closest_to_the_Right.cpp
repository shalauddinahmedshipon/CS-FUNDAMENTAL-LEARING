#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<k;i++){
      int q; cin>>q;
      int l=0,r=n-1,ans,mid;
      while(l<=r){
        mid=(l+r)/2;
        if(q<=v[mid]){
         ans=mid;
         r=mid-1;
        }else{
         l=mid+1;
        }
      }

      if(q>v[n-1]) cout<<n+1<<endl;
      else  cout<<ans+1<<endl;
     
    }

    return 0;
}