#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int a,b; cin>>a>>b;
        int x=max(a,b);
        n--;
        while (n--)
        {
            int p,q; cin>>p>>q;
            if(x>q){
                x=q;
            }
            if(x<p){
                x=p;
            }
            
        }
        
        cout<<x<<endl;

    }
    
    return 0;
}