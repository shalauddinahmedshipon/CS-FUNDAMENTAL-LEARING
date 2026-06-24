#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            cout<<0<<endl;
        }
        else{
            int cnt=0;
            while (a!=b)
            {
              if(__gcd(a,c)==__gcd(b,c)){
                 a=__gcd(a,c);
                 b=__gcd(b,c);
                 cnt++;
                 break;
              } 
              else{
               c++;cnt++;
              }
            }

            if(cnt>3) cnt=3;

            cout<<cnt<<endl;
            
            
        }
    }


    return 0;
}