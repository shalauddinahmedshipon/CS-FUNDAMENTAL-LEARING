#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while (t--)
    {
        ll a,b; cin>>a>>b;
        if(b==1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        ll x,y,z;
        x=a;
        y=a*b;
        z=x+y;

        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    
    return 0;
}