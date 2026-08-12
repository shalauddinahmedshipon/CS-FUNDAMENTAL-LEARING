#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t; 
    while (t--)
    {
        int n,s; cin>>n>>s;
        int ans=0;
        if(n*5>=s){
           ans=6*n;
        }
        else{
           int remaining=s-(n*5);
           ans=(remaining*5)+(n-remaining)*6;
        }

        cout<<ans<<endl;
    }
    
    return 0;
}