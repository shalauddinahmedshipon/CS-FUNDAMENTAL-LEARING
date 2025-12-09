#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int f;
        cin>>f;
        if(f<4){
            cout<<1<<endl;
        }
        else if(f%4==0){
            int res=f/4;
            cout<<res<<endl;
        }
        else if(f%4!=0){
           int res=(f/4)+1;
           cout<<res<<endl;
        }
    }
    
    return 0;
}