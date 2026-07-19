#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n),ans(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }


        int hit=0;

         for(int i=0;i<n;i++){
          ans[i]=min(hit,v[i]);
          if(hit<v[i]){
            hit++;
          }
        }
     
        for(auto h:ans){
            cout<<h<<" ";
        }
        
        cout<<endl;

    }
    
    return 0;
}