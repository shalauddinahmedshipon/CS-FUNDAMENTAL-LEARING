#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,x,k; cin>>n>>x>>k;
            int a=x%k, b=k-a;
            if(n-x>=b){
              cout<<min(a,b)<<endl;
            }
            else{
              cout<<a<<endl;
            }
        
    }
    
    return 0;
}