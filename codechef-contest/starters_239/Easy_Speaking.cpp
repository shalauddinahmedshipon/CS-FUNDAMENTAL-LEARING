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
        if(n<4) cout<<"No"<<endl;
        else{
            int mx=0,cnt=0;
            for (int i = 0; i < n; i++)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                   cnt=0;
                }else{
                    cnt++;
                }
                mx=max(mx,cnt);
            }

            if(mx>=4) cout<<"Yes"<<endl;
             else cout<<"No"<<endl;
            
        }

        
    }
    
    return 0;
}