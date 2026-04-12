#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       int frq[26]={0};
       for (int i = 0; i <s.size(); i++)
       {
        frq[s[i]-97]++;
       }

       int cnt=0;
       for(int x:frq){
         if(x%2==1) cnt++;
       }
       
       if(cnt-k>1) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }
    
    return 0;
}