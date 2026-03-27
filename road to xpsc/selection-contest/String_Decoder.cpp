#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        map<char,int> mp;
        for (int i = 0; i <s.size(); i++)
        {
           if(s[i]>='a'){
            mp[s[i]]=int(s[i+1]-48);
           }
        }

    vector<char> v;
    for(auto x:mp){
        if(x.second!=0){
            for (int i = 1; i <=x.second; i++)
            {
                v.push_back(x.first);
            }
            
     
        }
    }

    for(auto x:v){
       cout<<x;
    }
      cout<<endl;  
    }
   
    
    return 0;
}