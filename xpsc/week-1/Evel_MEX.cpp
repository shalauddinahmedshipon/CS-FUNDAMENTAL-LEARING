#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
       int y;
       cin>>y;
       v.push_back(y);
    }

    sort(v.begin(),v.end());
    
    vector<int> v1(101,-1);

     for (int i = 0; i < n; i++)
    {
      v1[v[i]]=v[i];
    }
    int cnt=0;
     for (int i = 0; i < x; i++)
    {
      if(v1[i]==-1){
         cnt++;
      }
    }

    if(v1[x]!=-1){
      cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}