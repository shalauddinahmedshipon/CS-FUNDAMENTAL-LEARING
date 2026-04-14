#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,string> mp;
    int cnt=0;

    for (int i = 0; i < n; i++)
    {
       string a,b;
       cin>>a>>b;
       if(mp.find(a)!=mp.end()){
         auto it=mp.find(a);
         string x,y;
         x=it->first;
         y=it->second;
         mp.erase(a);
         mp[b]=y;
       }else{
        mp[b]=a;
        cnt++;
       }
       
    }

    cout<<cnt<<endl;
    for(auto [key,value]:mp){
     cout<<value<<" "<<key<<endl;
    }
    
    return 0;
}