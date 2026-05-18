#include<bits/stdc++.h>;
using namespace std;

 int main(){
     int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       vector<long long int> v(n),prefixSum(n);
       for ( int i = 0; i < n; i++)
       {
        cin>>v[i];
        prefixSum[i]=v[i];
       }

       for ( int i = 1; i < n; i++)
       {    
        prefixSum[i]+=prefixSum[i-1];
       }

       string s;
       cin>>s;

       long long int l=0,r=n-1,ans=0;

       while (l<r)
       {
          if(s[l]=='R'){
            l++;
          }
          if(s[r]=='L'){
            r--;
          }
          if(s[l]=='L'&&s[r]=='R'){
            ans+=prefixSum[r];
            if(l!=0){
                ans-=prefixSum[l-1];
            }
            l++,r--;
          }
       }
       
       cout<<ans<<endl;
       
    }
    
    return 0;
}