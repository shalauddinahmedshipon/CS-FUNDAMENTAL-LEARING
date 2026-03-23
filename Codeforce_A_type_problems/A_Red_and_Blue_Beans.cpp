#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
    
      long long int r,b,d;
       cin>>r>>b>>d;
       if(d==0){
        if(r==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }else{
       long long int mn=min(r,b);
       long long int mx=max(r,b);
       if(mn*(d+1)>=mx) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       }
       
    }
    
    return 0;
}