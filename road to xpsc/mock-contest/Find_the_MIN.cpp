#include<bits/stdc++.h>;
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;
    map<int,int> mp;
    set<pair<int,int>> st;
    while (q--)
    {
       
        int type;
        cin>>type;
        if(type==1){
            int x;
            cin>>x;
            if(mp.find(x)!=mp.end()){
                st.erase({x,mp[x]});
            }
            mp[x]++;
            st.insert({x,mp[x]});
        }else{
            if(st.empty()){
                cout<<"empty\n";
            }else{
                pair<int,int> p=*st.begin();
                int val=p.first;
                int cnt=p.second;
                cout<<val<<"\n";
                st.erase(p);
                mp.erase(val);
               
            }
        }
    }
    
    return 0;
}