#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       string s;
       cin>>s;
       if(n%2==1){
        cout<<"NO"<<endl;
       }else{
        int cntOp=0,cntCl=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                cntOp++;
            }
            if(s[i]==')'){
                cntCl++;
            }
        }

        if(cntOp==cntCl) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }
    }
    
    return 0;
}