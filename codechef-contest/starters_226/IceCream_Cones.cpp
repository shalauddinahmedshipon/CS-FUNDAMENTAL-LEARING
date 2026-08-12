#include<bits/stdc++.h>;
using namespace std;

int main(){
  int t; cin>>t;
  while (t--)
  {
      int x,y,n; cin>>x>>y>>n;
    int rem=y*n;
    if(rem>=x) cout<<0<<endl;
    else cout<<x-rem<<endl;
  }
  
    return 0;
}