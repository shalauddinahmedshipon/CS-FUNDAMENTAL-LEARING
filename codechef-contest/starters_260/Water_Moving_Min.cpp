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

        sort(v.begin(),v.end());
        int mx_v=v[n-1];
        int mx_v2=v[0]+v[1];
        int ans=max(mx_v,mx_v2);
        cout<<ans<<endl;
        
    }
    
    return 0;
}