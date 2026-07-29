#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n; cin>>n;
    int f=n/10;
    int l=n%10;
    if(f==l) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}