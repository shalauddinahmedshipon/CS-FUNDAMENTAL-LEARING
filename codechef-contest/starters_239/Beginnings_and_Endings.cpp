#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        map<int,vector<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin>>x;
            mp[x].push_back(i);
        }

        bool flag=false;
        int ans=n;
        for(auto x:mp){
           
           if(x.second.size()>=2) {
             flag=true;
             int sum=x.second[0]-1+n-x.second[x.second.size()-1];
             ans=min(ans,sum);
           }
        }

        if(!flag) cout<<-1<<endl;
        else{
            cout<<ans<<endl; 
        }
        
    }
    
    return 0;
}