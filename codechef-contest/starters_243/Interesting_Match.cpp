#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ans=abs(n-m);
    if(ans<=2) cout<<"Interesting"<<endl;
    else cout<<"Boring"<<endl;
    return 0;
}