#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            mp[x]++;
        }

       map<int,vector<int>> st;
        for (auto item:mp)
        {
            st[item.second].push_back(item.first);
        }

        auto item=st.rbegin()->second[0];
        cout<<item<<endl;

        
        
    }
    return 0;
}