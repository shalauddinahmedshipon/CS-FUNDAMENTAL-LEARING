#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t; 
    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            v.push_back({x,0});
        }

        for (int i = 0; i < n; i++)
        {
            int y; cin>>y;
            v[i]={v[i].first,y};
        }

        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        ll total=0;

        for (int i = 0; i < n-1; i++)
        {
                int a,b;
                if(v[i].first>200){
                  a=v[i].first-100;
                }
                else{
                  a=v[i].first/2;
                }

            for (int j =i+1; j < n; j++)
            {
                 b=v[j].first;
                 int sum=a+b;
                 if(sum<=k){
                     ll r=v[i].second+v[j].second;
                     total=max(total,r);
                 }
            }
            
        }

      
        
        cout<<total<<endl;
    }
    
    return 0;
}