#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> v(n),preSum(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        
        sort(v.rbegin(),v.rend());

        preSum[0]=v[0];
       
        for (int i = 1; i < n; i++)
        {
            preSum[i]=v[i]+preSum[i-1];
        }
        
        for (int i = 0; i < q; i++){
             int k; cin>>k;
             int ans=-1;
             auto it=lower_bound(preSum.begin(),preSum.end(),k);
             if(it!=preSum.end()){
              ans=it-preSum.begin()+1;
        
             }

             cout<<ans<<endl;
        }
        
           
           
           

           
        }

        
        
        
    
    return 0;
}