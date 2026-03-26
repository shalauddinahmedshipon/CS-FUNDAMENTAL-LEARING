#include<bits/stdc++.h>;
using namespace std;

class cmp{
    public:
    bool operator()(pair<int,int> a,pair<int,int> b)const{
    if(a.first!=b.first) return a.first<b.first;
    else return a.second>b.second;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;
    map<int,int> mp;
    set<pair<int,int>,cmp> st;
    while (q--)
    {
       
        int type;
        cin>>type;
        if(type==1){
            int x;
            cin>>x;
            if(mp.find(x)!=mp.end()){
                st.erase({mp[x],x});
            }
            mp[x]++;
            st.insert({mp[x],x});
        }else{
            if(st.empty()){
                cout<<"empty\n";
            }else{
                pair<int,int> p=*st.begin();
                int val=p.second;
                int cnt=p.first;
                cout<<val<<"\n";
                int remove=max(1,cnt/2);
                cnt-=remove;
                st.erase(p);
                if(cnt==0){
                    mp.erase(val);
                }else{
                     mp[val]=cnt;
                    st.insert({cnt,val});
                }
                 
            }
        }
    }
    
    return 0;
}