#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        // int gcd=1;
        
        // for (int i = 1; i <n ; i++)
        // {
        //      for (int j = i+1; j <=n; j++)
        //      {
        //         gcd=max(gcd,__gcd(i,j));
        //      }
              
        // }
        int gcd=n/2;

        cout<<gcd<<endl;
        
    }
    return 0;
}