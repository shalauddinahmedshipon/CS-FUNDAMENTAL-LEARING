#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
       
        for (int i = 0; i <n; i++)
        {
            cin>>v[i];
        }

      ll res=0;

      for (int i = 0; i < n; i++)
      {
        res=1;
        for (int j = 0; j < n; j++)
        {
            ll temp=j<i? v[j]+v[i]: v[j]-v[i];
            if(temp!=0){
                res=0;
                break;
            }
        }

        if(res){
           break;
        }
        
      }

      if(res) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
      
      
        
    }
    
    return 0;
}