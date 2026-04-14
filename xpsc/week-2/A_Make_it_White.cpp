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
      int mnIdx=0;
      int mxIdx=0;
      for (int i = 0; i < s.size(); i++)
      {
         if(s[i]=='B'){
           mnIdx=i;
           break;
         }
      }
      for (int i = s.size()-1; i!=0; i--)
      {
         if(s[i]=='B'){
           mxIdx=i;
           break;
         }
      }

      cout<<mxIdx-mnIdx+1<<endl;
      
    }
    
    return 0;
}