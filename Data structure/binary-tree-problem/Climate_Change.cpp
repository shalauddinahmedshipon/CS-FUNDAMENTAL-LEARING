#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<long long int> v(n+1);
    vector<long long int> pre(n+1);
   
    long long int total=0;
    for (int i = 1; i <= n; i++)
    {
       cin>>v[i];
       total+=v[i];
    }

    pre[1]=v[1];

    for (int i = 2; i <= n; i++)
    {
      pre[i]=pre[i-1]+v[i];
    }

    int scount=0;

    for (int i = 1; i <= n; i++)
    {
      long long int r= total- pre[i];
      if(pre[i]==r){
        scount++;
      }
    }


    cout<<scount<<endl;
   
    
    return 0;
}