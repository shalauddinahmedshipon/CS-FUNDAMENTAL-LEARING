#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        
        if(m==k||m<k) cout<<m<<endl;
        else{
            ll d=(m/(k+1));
            ll r=m%(k+1);
            ll ans=(d*k)+r;
            cout<<ans<<endl;
        }
    }
    
    return 0;
}