#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        bool flag=false;
        if(x>=50&y>=50){
            flag=true;
        }
        else if(y>=50&z>=50){
            flag=true;
        }
        else if(x>=50&z>=50){
            flag=true;
        }

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}