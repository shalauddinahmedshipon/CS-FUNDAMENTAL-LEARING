#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &i:v) cin>>i;
        map<int,int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }

        int mx=0;
        for (int s = 2; s <= 2*n; s++)
        {
            int current=0;
             for(auto [x,cntX]:mp){
                  int y=s-x;
                  if(mp.find(y)!=mp.end()){
                    int cntY=mp[y];
                    current+=min(cntX,cntY);
                  }
                }
                current=current/2;
             mx=max(current,mx);   
        }
        
       cout<<mx<<endl;
        
    }
    
    return 0;
}