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
        int ans=0;
        // int l=0,r=0,cnt=0;
        // while (r<n)
        // {
            
        // }
     
        for (int i = 1; i < n-1; i++)
        {
           
           if(s[i]==s[i-1]&&s[i]==s[i+1]){
            ans++;
            if((i+3) <= (n-2)){
              i+=2;
            }else{
                break;
            }
            
           } 
        }

        cout<<ans<<endl;
    }
    
    return 0;
}