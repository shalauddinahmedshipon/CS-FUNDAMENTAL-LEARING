#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       map<char,int> mp;
       int n;
       cin>>n;
       string s;
       cin>>s;
       bool flag =true;
       for (int i = 0; i < n; i++)
       {
          mp[s[i]]++;
          if(i>0&&mp[s[i]]>1&&s[i]!=s[i-1]) flag=false;
       }
       if(flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    
    return 0;
}