#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    int r;
    if((n+1)%20==0){
      r=(n+1)/20;  
    }
    else{
        r=(n+1)/20+1;
        
    }
    cout<<r<<endl;
    return 0;
}