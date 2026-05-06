#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        vector<int> v;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.begin(),v.end());
        int mx=v[2];
        int others=v[0]+v[1];
        int df=others-mx;
        if(df==0) cout<<1<<endl;
        else if(df>0) cout<<0<<endl;
        else{
            cout<<(-df)+1<<endl;
        }
    }
    return 0;
}