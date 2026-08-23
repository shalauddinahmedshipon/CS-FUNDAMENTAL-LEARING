#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n+1);
        for (int i = 0; i <=n; i++)
        {
            cin>>v[i];
        }

        int mn=INT_MAX;

        for (int i = 1; i <=n; i++)
        {
            int mx=max(v[i-1],v[i]);
            mn=min(mn,mx);
        }

        cout<<mn<<endl;
        
        
    }
    
    return 0;
}