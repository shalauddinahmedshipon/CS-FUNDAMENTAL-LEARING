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
       int good=0,bad=0,one=0,zero=0;
       for (int i = 0; i < n/2; i++)
       {
           if(s[i]==s[n-i-1]){
              good++;
              if(s[i]=='0') zero++;
              else one++;
           }else{
             bad++;
           }
       }
       
       if(good==k){
        cout<<"YES"<<endl;
       }
       else if(good<k){
        int needIncrease=k-good;
        if(needIncrease%2==0&&bad>=needIncrease) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }
       else{
        int needDecrease=good-k;
        if(needDecrease%2==0&&one*2>=needDecrease&&zero*2>=needDecrease) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }
        

    }
    
    return 0;
}