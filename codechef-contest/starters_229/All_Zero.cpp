#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int  a,b,c; cin>>a>>b>>c;
        if(c%3==0){
           int s=c/3;
           b=b-s;
           if((2*a)==b){
            cout<<"Yes"<<endl;
           }
           else cout<<"No"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}