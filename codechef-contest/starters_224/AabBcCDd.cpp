#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

    for (int i = 0; i < n; i++)
    {
        if(s[i]<97){
            s[i]=s[i]+32;
        }
    }

    map<char,int> mp;
   

    for(char ch:s){
        mp[ch]++;
    }

  
     vector<int> v;
   for(auto item:mp){
     v.push_back(item.second);
     
   }

   sort(v.rbegin(),v.rend());

   int ans=0;
  
   if(v.size()>=2) ans=v[0]+v[1];
   else ans=v[0];
   
    cout<<ans<<endl;
    }

   
    
    
    return 0;
}