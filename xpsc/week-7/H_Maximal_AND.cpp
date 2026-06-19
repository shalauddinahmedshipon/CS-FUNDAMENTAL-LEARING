#include<bits/stdc++.h>;
using namespace std;


int main(){
    int b=30;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n),bits(b+1);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        for (int i = 0; i< n; i++)
        {
            for (int j = b; j >=0; j--)
            {
                if((v[i]>>j)&1) bits[j]++;
            }
            
        }

           int ans=0;
       
            for (int j = b; j >=0; j--)
            {
                if(bits[j]==n){
                  ans+=(1LL<<j);
                }
                else{
                    int need=n-bits[j];
                    if(k>=need){
                        ans+=(1LL<<j);
                        k-=need; 
                    }
                }
            }
     

        cout<<ans<<endl;

        
    }
    return 0;
}