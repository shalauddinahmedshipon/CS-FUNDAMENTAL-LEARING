#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; 
    cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int cnt=0,l=0,r=n-1;
        bool flag=true;
        while (k--)
        {

            if(l>=r){
                flag=false;
                break;
            }

            if(s[l]=='L'){
                cnt++;
            }
            if(s[r]=='R'){
                cnt++;
            }

            l++;r--;
        }
        
        if(flag) cout<<cnt<<endl;
        else cout<<-1<<endl;
        
    }
    
    return 0;
}