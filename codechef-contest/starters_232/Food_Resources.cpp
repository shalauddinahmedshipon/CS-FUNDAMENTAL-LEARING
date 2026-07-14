#include<bits/stdc++.h>;
using namespace std;
#define ll long long



bool check(ll mid,ll m, vector<int> v){
       ll sum=0;
       for (auto it:v)
       {
         sum+=(it/mid);
       }
       
       return sum>=m;
}

int main(){
    int n,m; cin>>n>>m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    ll ans=0,l=1,r=INT_MAX,mid;

    while (l<=r)
    {
        mid=(l+r)/2;
        if(check(mid,m,v)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }


    if(m>n) cout<<0<<endl;
    else{
    cout<<ans<<endl;
    }

    return 0;
}