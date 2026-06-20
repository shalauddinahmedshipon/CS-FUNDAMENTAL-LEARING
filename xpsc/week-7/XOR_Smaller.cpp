#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &i:v) cin>>i;
        int ans=v[0];
        for(auto x:v){
            ans&=x;
        }

        cout<<ans<<endl;
    }
    return 0;
}