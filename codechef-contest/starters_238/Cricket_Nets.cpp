#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int r;
        cin>>r;
        if(r<=20) cout<<r*10<<endl;
        else{
            int remaining=r-20;
            cout<<200+(remaining/2)*5<<endl;
        }
    }
    
    return 0;
}