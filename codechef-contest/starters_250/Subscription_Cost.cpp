#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,x,y; cin>>n>>x>>y;
        int r=0;
        if(n>3){
            r=n-3;
            cout<<(3*x+r*y)<<endl;
        }
        else{
           cout<<n*x<<endl;
        }
    }
    
    return 0;
}