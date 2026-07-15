#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,p; cin>>n>>p;
        string s; cin>>s;
        int cntR=0,cntL=0;
        for (int i = p-1; i < n; i++)
        {
            if(s[i]=='L') cntR++;
        }

        for (int i = p-1; i>=0; i--)
        {
            if(s[i]=='R') cntL++;
        }

        cout<<min(cntR,cntL)<<endl;
         
    }
    return 0;
}