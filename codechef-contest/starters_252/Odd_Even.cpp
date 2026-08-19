#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
       int n; cin>>n;
       vector<int> v(n);

       map<string,int> mp;
       for (int i = 0; i < n; i++)
       {
        cin>>v[i];
        if(v[i]%2==0){
        mp["even"]++;
        }else{
         mp["odd"]++;
        }

       }

       
        int res=0;
       if(mp["odd"]==mp["even"]){
        res=mp["odd"]+mp["even"];
       }
       else if(mp["odd"]>mp["even"]){
        res=2*mp["even"]+1;
       }
       else{
         res=2*mp["ood"]+1;
       }

     
       if(mp.size()==1){
        cout<<0<<endl;
        continue;
       }
       cout<<res<<endl;
       
    }
    
    return 0;
}