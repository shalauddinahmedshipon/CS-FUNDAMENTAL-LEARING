#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        ll ans=abs(v[0]);

        for (int i = 1; i < n; i++)
        {
            if(v[i]<0 and v[i-1]<0){
                ans+=abs(v[i]);
            }
            else if(v[i]>0 and v[i-1]>0){
                ans+=abs(v[i]);
            }
            else{
                ll help=abs(v[i-1]);
                if(abs(v[i])>help){
                    ans+=abs(v[i])-help;
                }
            }
        }

        cout<<ans<<endl;
        
        
    }
    
    return 0;
}