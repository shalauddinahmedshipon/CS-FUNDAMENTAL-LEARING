#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int tmp=1;
        while((tmp+x)<=n){
            tmp=tmp+x;
        }
        cout<<tmp<<endl;
    }
    return 0;
}