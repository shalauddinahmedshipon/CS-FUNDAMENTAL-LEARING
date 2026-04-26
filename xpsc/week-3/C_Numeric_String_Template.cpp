#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
      int n;
      cin>>n;
      vector<int> v;
      for (int i = 0; i < n; i++)
      {
       int x;
       cin>>x;
       v.push_back(x);
      }
      
      
      int m;
      cin>>m;

      while (m--)
      {
       string s;
       cin>>s;

      if(s.size()!=n){
        cout<<"NO"<<endl;
      }else{
        

        // bool flag=true;
        // for(auto it:mp){
        //     if(it.second.size()>1) flag=false;
        // }

        set<pair<char,int>> st;

        for (int i = 0; i < n; i++)
        {
           st.insert({s[i],v[i]});
            
        }

        map<int,set<char>> mp1;
         bool flag=true;
        for(auto item:st){
            mp1[item.second].insert(item.first);
        }

        map<char,set<int>> mp2;

        for (int i = 0; i < n; i++)
        {
           
            mp2[s[i]].insert(v[i]);
        }

        
        for(auto it:mp1){
            if(it.second.size()>1) flag=false;
        }
        for(auto it:mp2){
            if(it.second.size()>1) flag=false;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
      }
      }
      
      
      
    }
    
    return 0;
}