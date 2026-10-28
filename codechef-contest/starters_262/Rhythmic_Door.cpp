#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s; cin>>s;
        int ans=0;
        int cnt=1;
        for (int i = 1; i < n; i++)
        {
            if(s[i-1]==s[i]){
                if(cnt<3) cnt++;
            }else{
              cnt=1;
            }

            if(cnt==3){
                ans+=1;
                cnt=1;
                if(i<n){
                    i++;
                }
            }
        }


        cout<<ans<<endl;
        
    }
    
    return 0;
}