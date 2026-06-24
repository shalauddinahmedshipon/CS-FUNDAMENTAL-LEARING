#include<bits/stdc++.h>;
using namespace std;

int main(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    if(x==a){
            
           if(y>=b){
            cout<<"Alice"<<endl;
           }
           else {
            cout<<"Bob"<<endl;
           }
           
    }
    else if(x>a){
        cout<<"Alice"<<endl;
    }
    else cout<<"Bob"<<endl;
    return 0;
}