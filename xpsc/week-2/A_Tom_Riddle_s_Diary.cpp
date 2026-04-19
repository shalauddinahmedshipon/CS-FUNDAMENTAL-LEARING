#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        if(mp.find(name)==mp.end()){
            cout<<"NO"<<endl;
            mp[name]++;
        }else{
            cout<<"YES"<<endl;
            mp[name]++;
        }
    }
    return 0;
}