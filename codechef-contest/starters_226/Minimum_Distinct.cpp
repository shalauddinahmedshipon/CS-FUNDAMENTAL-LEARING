#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(n),frq;
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
       
        for (auto item:mp)
        {
            if(item.first==v[0]) continue;
            frq.push_back(item.second);
        }

        sort(frq.begin(),frq.end());

        int remaining=k,i=0;

         while (i<frq.size())
         {
            int val=frq[i];
            remaining-=val;
            if(remaining<0) break;
            i++;
         }
         
        cout<<(1+(frq.size()-i))<<endl;
      
        
        
        
    }
    
    return 0;
}