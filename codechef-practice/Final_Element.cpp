#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(auto &i:v) cin>>i;

        int res=v[0];
        if(n%2==1){
          for (int i = 1; i < n; i++)
          {
            res|=v[i];
          }
          
        }else{
            for (int i = 1; i < n; i++)
          {
            res^=v[i];
          }
        }

        cout<<res<<endl;
    }
    return 0;
}