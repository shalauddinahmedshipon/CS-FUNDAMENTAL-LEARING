#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
         int n; cin>>n;
         vector<int> v(n);
         for (int i = 0; i < n; i++)
         {
            cin>>v[i];
         }

         map<int,int> mp;
         
         for (int i = 0; i < n; i++)
         {
           mp[v[i]-i]++;
            
         }

         int cnt=0;

         for(auto item:mp){
            int a=item.second;
            cnt+=(a*(a-1))/2;

         }
        
         cout<<cnt<<endl;
         
    }
    
    return 0;
}