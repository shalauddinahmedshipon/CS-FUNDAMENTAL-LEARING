#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        set<int> available;
        for(int i=0;i<=n;i++){
            int ans1=mp[i];
            

            int ans2=i-available.size();

            cout<<max(ans1,ans2)<<" ";

            if(mp[i]){
                available.insert(i);
            }
        }
         
        cout<<endl;
        
    }
    return 0;
}