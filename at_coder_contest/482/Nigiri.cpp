#include<bits/stdc++.h>;
using namespace std;

int main(){
    string s; cin>>s;
    int cnt=0;
    for(char x: s){
        if(x=='o') cnt++;
    }

    if(cnt%2==0) cout<<"even"<<endl;
    else cout<<"odd"<<endl;
    return 0;
}