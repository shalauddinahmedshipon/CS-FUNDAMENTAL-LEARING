#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    map<int,int> mp;
    ll sum=0,rem=0,ans=0;
    mp[0]++;
    for (int i = 0; i <n; i++)
    {
     sum+=v[i];
     rem=sum%n;
     if(rem<0){
        rem+=n;
     }
     if(mp.find(rem)!=mp.end()){
       ans+=mp[rem];
       mp[rem]++;
     }
     else{
      mp[rem]++;
     }
    }

      cout<<ans<<endl;
    
    return 0;
}