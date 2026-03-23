#include<bits/stdc++.h>;
using namespace std;
map< int,bool> dp;
    int n;
bool reachable( int acc){
if(acc>n) return false;
else if(acc==n) return true;
else if(dp.count(acc)){
    return dp[acc];
}
else{
  bool op1=reachable(acc+3);
  bool op2=reachable(acc*2);
return dp[acc]=op1||op2;
}

}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
     dp.clear();
     cin>>n;
     bool res=reachable(1); 
     if(n==1) cout<<"YES"<<endl;
     else if(res) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;  
    }
    
    return 0;
}