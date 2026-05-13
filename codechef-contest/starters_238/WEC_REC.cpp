#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n,m,k;
       cin>>n>>m>>k;
       map<int,int> mp;
       for (int i = 0; i < n; i++)
       {
        int x;
        cin>>x;
        mp[x]++;
       }

       vector<pair<int,int>> v;

       for(auto x:mp){
        v.push_back({x.second,x.first});
       }
       
      
       reverse(v.begin(),v.end());  
       
       int total=0;
       if(v.size()<k){
         for(int i=0;i<v.size();i++){
            total+=v[i].first;
         }

       }else{
          for(int i=0;i<k;i++){
            total+=v[i].first;
         }
       }

       if(total<=m) cout<<total<<endl;
       else cout<<m<<endl;
       
    }
    
    return 0;
}