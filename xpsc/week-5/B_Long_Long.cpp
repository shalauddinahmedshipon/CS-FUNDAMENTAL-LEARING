#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> v(n);
        for (int i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        
        int cnt=0, r=0;
        bool flag=false;
        while (r<n)
        {
            if(v[r]<=0){
                if(v[r]<0) {flag=true;};
                if(flag==true && r==n-1) cnt++;
            }
            else{
                if(flag){
                    cnt++;
                    flag=false;
                }
            }
            r++;
        }
        
        ll sum=0;
        for(ll x:v){
          if(x<0) sum+=(-x);
          else sum+=x;
        }
         cout<<sum<<" "<<cnt<<endl;
        
    }
    
    return 0;
}