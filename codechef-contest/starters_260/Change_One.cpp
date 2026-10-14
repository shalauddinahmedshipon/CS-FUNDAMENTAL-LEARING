#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int mn_v=v[1];
        int mx_v=v[n-2];
        int res1=mx_v-v[0];
        int res2=v[n-1]-mn_v;
        cout<<min(res1,res2)<<endl;
    }
    return 0;
}