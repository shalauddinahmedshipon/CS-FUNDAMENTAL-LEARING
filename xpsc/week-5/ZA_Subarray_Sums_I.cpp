#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for (int i = 0; i<n; i++)
    {
        cin>>v[i];
    }

    int l=0,r=0,sum=v[r],cnt=0;

    bool flag=false;
    while (l<n && r<n)
    {
       
       
        if(sum==x){
          cnt++;
          sum-=v[l];
          l++;
        }
        else if(sum<x){
         r++;
         sum+=v[r];
         
        }
        else if(sum>x){
        sum-=v[l];
        l++;
        }
    }
    
    cout<<cnt<<endl;
    return 0;
}