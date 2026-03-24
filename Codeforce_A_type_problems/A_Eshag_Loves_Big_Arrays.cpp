#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
      int n;
      cin>>n;
      vector<int> v;
     
      for (int i = 0; i < n; i++)
      {
       int x;
       cin>>x;
       v.push_back(x);
      }

    sort(v.begin(),v.end());
    
    int count=0;
    int i=n-1;
    while (v[0]!=v[i])
    {
      count++;
      i--; 
    }
    cout<<count<<endl;
    }
    
    return 0;
}