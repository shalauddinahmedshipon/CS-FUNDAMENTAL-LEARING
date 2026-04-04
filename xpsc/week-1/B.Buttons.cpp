#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int ans=0;
    if(abs(a-b)<=1){
      ans=a+b;
    }else{
      ans=max(a,b)*2-1;
    }

    cout<<ans<<endl;
    return 0;
}