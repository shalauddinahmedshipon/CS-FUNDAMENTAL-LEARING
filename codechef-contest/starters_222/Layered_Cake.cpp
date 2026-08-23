#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,m; cin>>n>>m;
        vector<int> v1(n),v2(m);
        for (int i = 0; i < n; i++)
        {
            cin>>v1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin>>v2[i];
        }

        int ans=0;

        sort(v2.begin(),v2.end());

        for (int i = 0; i < n; i++)
        {
            int x=v1[i];
            auto it=lower_bound(v2.begin(),v2.end(),x);
            int pos=it-v2.begin();
            ans+=pos;
        }

      
        cout<<ans<<endl;
        
    }
    
    return 0;
}