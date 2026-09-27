#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s,s2; cin>>s;
        map<char,int> unq;
        for(char ch:s){
            unq[ch]++;
        }

        for(auto item:unq){
            s2.push_back(item.first);
        }

      
        int size=s2.size();

        map<char,char> mp;
        for (int i = 0; i <= size/2; i++)
        {
            mp[s2[i]]=s2[size-i-1];
        }

        for(auto item:mp){
            mp[item.second]=item.first;
        }


       

      

        for (int i = 0; i < n; i++)
        {
            s[i]=mp[s[i]];
        }

        cout<<s<<endl;
        

      

        
    }
    return 0;
}