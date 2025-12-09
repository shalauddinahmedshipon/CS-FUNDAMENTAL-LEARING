#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int nz,nc;
        cin>>nz>>nc;
        int arr[nz];
        for (int i = 0; i < nz; i++)
        {
           cin>>arr[i];
        }
        int mini=INT_MAX;
        bool isdistributed=false;
        for (int i = 0; i < nz; i++)
        {
          if(arr[i]%nc==0){
            mini=0;
            isdistributed=true;
          }else{
            if(arr[i]>nc){
             int mod=arr[i]%nc;
             if(mod<mini){
                mini=mod;
                isdistributed=true;
             }
            }
          }
        }
        if(isdistributed){
            cout<<mini<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }
    
    return 0;
}