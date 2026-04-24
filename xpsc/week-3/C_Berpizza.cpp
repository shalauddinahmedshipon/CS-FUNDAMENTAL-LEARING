

#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    set<pair<int,int>> st;
    multiset<pair<int,int>>ml;
    int idx=0;
    while (q--)
    {
       int type;
       cin>>type;
       if(type==1){
        int amount;
        cin>>amount;
        idx++;
        st.insert({idx,amount});
        ml.insert({amount,-idx});
       }
       if(type==2){
        auto it=st.begin();
        auto it2= ml.find({it->second,-it->first});
        cout<<it->first<<" ";
        st.erase(it);
        ml.erase(it2);
       }
       if(type==3){
        auto it=ml.end();
        it--;
        auto it2= st.find({-it->second,it->first});
        cout<<it2->first<<" ";
        ml.erase(it);
        st.erase(it2);
       }
    }
    
    return 0;
}