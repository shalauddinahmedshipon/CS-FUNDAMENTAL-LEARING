#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

       
        sort(v.rbegin(),v.rend());
         int ans=v[0];

        for (int i = 1; i <= k; i++)
        {
            if(i==n){
                break;
            }
            ans+=v[i];
          
            
            
        }

      
        cout<<ans<<endl;
        
        
    }
    
    return 0;
}