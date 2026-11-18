#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        int total=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            total+=v[i];
        }

        int mn_dis=INT_MAX;
       

        for (int i = 1; i < n; i++)
        {
            int curr_dis=(v[i]+v[i-1])/2;
            mn_dis=min(curr_dis,mn_dis);     
        }

        int ans=total-mn_dis;
        cout<<ans<<endl;


        
    }
    
    return 0;
}