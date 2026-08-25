#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int cnt0=0,cnt1=0,res=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1'){
                cnt1++;
            }
            else{
                cnt0++;
            }
            if(cnt1>=cnt0){
                res++;
            }
        }

        cout<<res<<endl;
        
    }
    
    return 0;
}