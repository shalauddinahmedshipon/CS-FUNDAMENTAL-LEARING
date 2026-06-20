#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        ll sum=0,oR=0; 
        for(auto &val:v){
                 cin>>val;
                 sum+=val;
                 oR|=val;
        } 

        if(sum==oR) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    return 0;
}