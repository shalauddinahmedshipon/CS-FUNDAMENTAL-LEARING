#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;

        int j=n;
        bool flag=false;
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=n-1;i>0;i--){
           if(s[i]==s[i-1]){
             if(j>k){
                j--;
             }
           }

           if(j==k){
            flag=true;
            break;
           }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}