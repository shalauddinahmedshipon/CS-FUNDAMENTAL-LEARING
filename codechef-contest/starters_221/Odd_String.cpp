#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        map<char,int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        bool flag=true;

        for(auto item:mp){
            if(item.second>2){
                flag=false;
                break;
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
}