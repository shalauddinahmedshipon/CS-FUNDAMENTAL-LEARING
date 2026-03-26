#include<bits/stdc++.h>;
using namespace std;

int main(){
     int n;
    cin>>n;
    map<long long int,pair<long long int,long long int>> mp;
    for ( int i = 1; i <=n; i++)
    {
        long long int val;
        cin>>val;
        if(mp.find(val)==mp.end()){
            mp[val].first=i;
            mp[val].second=i;
        }else{
            mp[val].second=i;
        }
        
    }
    for(auto item:mp){
        cout<<item.first<<" "<<item.second.first<<" "<<item.second.second<<endl;
    }
    return 0;
}