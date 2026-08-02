#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        int mx=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mx=max(mx,v[i]);
        }

        int mn=INT_MAX;

        for (int i = 1; i < n; i++)
        {
            int maxValue=max(v[i-1],v[i]);
            mn=min(mn,maxValue);
        }

        cout<<mn-1<<endl;
        
        
    }
    return 0;
}