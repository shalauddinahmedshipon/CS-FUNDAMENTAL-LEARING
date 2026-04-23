#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int> pre;
    set<int> pre_st;
    for(int i=n-1;i>=0;i--){
        pre_st.insert(v[i]);
        pre.push_back(pre_st.size());
    }

    reverse(pre.begin(),pre.end());
    while (m--)
    {
       int q;
       cin>>q;
       cout<<pre[q-1]<<endl;
    }
    
    
    return 0;
}