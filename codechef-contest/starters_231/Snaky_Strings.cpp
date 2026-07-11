#include<bits/stdc++.h>;
using namespace std;

int main(){
    string s; cin>>s;
    int n=s.size();
    if(s[0]=='s'||s[n-1]=='s') cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}