#include<bits/stdc++.h>;
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(z<=50) cout<<x<<endl;
    else{
        int r=(z-50)*y;
        cout<<r+x<<endl;
    }
    return 0;
}