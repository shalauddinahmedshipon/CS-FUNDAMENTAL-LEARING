#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,a,b; cin>>n>>a>>b;
        if(n<a){
            cout<<n<<endl;
        }
        else{
            int r=a-b;
            while (n>=a)
            {
                n-=r;
            }
            
            cout<<n<<endl;
        }
    }
    
    return 0;
}