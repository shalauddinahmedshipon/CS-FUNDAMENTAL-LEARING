#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v1(n),v2(m),v3(n+m);
    for (int i = 0; i < n; i++)
    {
       cin>>v1[i];
    }

    for (int i = 0; i < m; i++)
    {
       cin>>v2[i];
    }

    int l=0,r=0,i=0;

    while (l<n&&r<m)
    {
      if(v1[l]<v2[r]){
       v3[i]=v1[l];
       i++;l++;
      }else{
       v3[i]=v2[r];
       i++;r++;
      } 
    }
    
    while (l<n)
    {
        v3[i++]=v1[l++];
    }

    while (r<m)
    {
        v3[i++]=v2[r++];
    }

    for(int x:v3){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}