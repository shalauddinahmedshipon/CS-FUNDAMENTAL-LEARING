#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       int ans=k,cnt=0;
       int l=0,r=0;
       while (r<n)
       {
          if(s[r]=='W'){
            cnt++;
           }
          if(r-l+1==k){
           ans=min(cnt,ans);
           if(s[l]=='W'){
            cnt--;
           }
           l++;
          }
          r++;
       }

       cout<<ans<<endl;
       
    }
    
    return 0;
}