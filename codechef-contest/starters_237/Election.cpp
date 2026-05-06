#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int winner=(n/2)+1;
    if(k>=winner) cout<<0<<endl;
    else{
        int ans=winner-k;
        cout<<ans<<endl;
    }
    return 0;
}