#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int r,y; cin>>r>>y;
        int ans=0;
        if(r==0){
           ans=y/2; 
        }
        else if(y<=r){
            ans=r;
        }
        else if(y>r){
            ans=r+(y-r)/2;
        }

        cout<<ans<<endl;
    }
    
    return 0;
}