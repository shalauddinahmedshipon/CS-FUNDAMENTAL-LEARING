#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m=3;
        cin>>n;
        map<string,vector<int>> mp;
        for (int i = 1; i <=m; i++)
        {
           for (int j = 0; j<n; j++)
           {
             string s;
             cin>>s;
             mp[s].push_back(i);
           }
           
        }

        vector<int> res(m+1);
        for(auto [key,value]:mp){
          vector<int> v=value;
          if(v.size()==1){
            res[v[0]]+=3;
          }
          if(v.size()==2){
             for(int idx:v){
                res[idx]+=1;
             }
          }
        }

        for(int i=1;i<=3;i++){
            cout<<res[i]<<" ";
        }

        cout<<endl;
        
    }
    
    return 0;
}