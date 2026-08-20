#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
       int x,y,z; cin>>x>>y>>z;
       int a=min(x,z);
       int b=y/2;
       cout<<a+b<<endl;
    }
    
    return 0;
}