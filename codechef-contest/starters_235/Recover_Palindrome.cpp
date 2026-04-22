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
      int i=0;
      int j=n-1;
      bool flag=true;
    
      while (i<j)
      {
          if(s[i]=='?'&&s[j]=='?'){
            flag=false;
            break;
          } 
          i++;
          j--;
      }

      if(n%2==1&&s[n/2]=='?'){
        cout<<"NO"<<endl;
      }else{
       if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      }
      
      
      
    }
    
    return 0;
}