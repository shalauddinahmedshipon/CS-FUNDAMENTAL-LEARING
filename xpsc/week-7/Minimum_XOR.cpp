#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

         int xorr=v[0];
         for (int i = 1; i < n; i++)
         {
           xorr^=v[i];
            
          }

         if(xorr==0){
            cout<<0<<endl;
            continue;
         }
         int ans=xorr;

        for (int x:v)
        {
            ans=min(ans,xorr^x);
        }
        
        cout<<ans<<endl;
    }
    return 0;
}