#include<bits/stdc++.h>
using namespace std;
#define ll long long

string printGood(ll x){
    int it=__lg(x);
    string s1,s2;

   
    for (int i = it; i>=0; i--)
    {
        if((x>>i)&1==1){
            s1.push_back('1');
        }else{
           
             s1.push_back('0');
            
        }
    }

     bool flag=false;

     s2=s1;

    for (int i =(s1.size()-1); i>=0; i--)
    {
        if(s1[i]=='0'){
            if(!flag){
                s2[i]='1';
                flag=true;

            }

        }
        else{
            s2[i]='0';
        }
    }
    
    return s2;
    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll x;
        cin>>x;
       string s= printGood(x);

       ll res=0;

       for (int i = s.size()-1; i>=0; i--)
       {
           if(s[i]=='1'){
            res+=pow(2,s.size()-(i+1));
           }
       }

       if(res==1){
        cout<<2<<endl;
        continue;
       }

       cout<<res<<endl;
       

   

    }
    
    return 0;
}