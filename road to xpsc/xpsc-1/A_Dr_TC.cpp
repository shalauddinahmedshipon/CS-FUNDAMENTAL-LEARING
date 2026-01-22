#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       string s;
       cin>>s;
       int count=0;

       for (int i = 0; i < n; i++)
       {
          if(s[i]=='1'){
            count++;
          }
       }
       int res=0;

       for (int i = 0; i < n; i++)
       {
          if(s[i]=='1'){
           res+=count-1;
          }
          else{
            res+=count+1;
          }
       }

       cout<<res<<endl;
       
    }
    
    return 0;
}