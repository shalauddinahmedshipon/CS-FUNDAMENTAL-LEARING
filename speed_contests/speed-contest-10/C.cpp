#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,m; cin>>n>>m;
        if(n>m){
            cout<<n-m<<endl;
        }
        else if(m%n==0){
            cout<<0<<endl;
        }
        else{
            int ans1=m%n,ans2=(n*((m/n)+1))-m;
            cout<<min(ans1,ans2)<<endl;


        }
    }
    
    return 0;
}