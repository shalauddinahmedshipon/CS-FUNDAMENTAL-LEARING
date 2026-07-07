#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    ll l,r; cin>>l>>r;
    

    cout<<"YES"<<endl;
    for (ll i = l; i < r; i++)
    {
        cout<<i<<" "<<i+1<<endl;
        i++;
    }
    
    return 0;
}