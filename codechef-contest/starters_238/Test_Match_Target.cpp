#include<bits/stdc++.h>;
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int aus=x+z;
    if(aus<y) cout<<0<<endl;
    else{
        cout<<aus-y+1<<endl;
    }
    return 0;
}