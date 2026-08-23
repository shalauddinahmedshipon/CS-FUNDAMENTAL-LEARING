#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        map<char,int> cnt;
        for (int i = 0; i < n; i++)
        {
            cnt[s[i]]++;
        }

        bool flag=false;
        for(auto item:cnt){
            if(item.second>=2){
                flag=true;
                break;
            }
        }

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
    
    return 0;
}