#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            int j=i+1;
            if(j==n) j=0;
            int first=s[i]-'0';
            int second=s[j]-'0';
            int num=first*10+second;
            if(num%4==0){
                ans++;
            }

        }

        cout<<ans<<endl;
        
    }
    
    return 0;
}