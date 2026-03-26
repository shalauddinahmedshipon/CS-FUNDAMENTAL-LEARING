#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
      int n,k;
      cin>>n>>k;
      string s1,s2;
      cin>>s1>>s2;
      int count=0;
      for (int i = 0; i < n; i++)
      {
       if(s1[i]!=s2[i]){
        count++;
       }
      }
      
      if(count<=k) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   
    }
    
    return 0;
}