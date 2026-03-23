#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        long long int ans=0;
        while (n>=2050)
        {
           ans++;
           long long int d=2050;
           while (d<=n)
           {
            d*=10;
           }
           d/=10;
           n=n-d;
        }
        
        if(n==0) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}