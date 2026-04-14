#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    map<pair<string,string>,int> mp;

    for (int i = 0; i < n; i++)
    {
    string a,b;
    cin>>a>>b;
    mp[{a,b}]++;
    }

    int cnt=0;
    for(auto [key,value]:mp){
        cnt++;
    }

    cout<<cnt<<endl;

    
    return 0;
}