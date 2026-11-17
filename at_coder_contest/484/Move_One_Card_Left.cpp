#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    long long int ans=1;

    vector<int> cnt(n,0);
    
    for (int i = 0; i <n; i++)
    {

        if(i>0 && v[i]!=v[i-1]){
            ans+=i-cnt[v[i]];
        }
        cnt[v[i]]++;
    }

    cout<<ans<<endl;
    
    
    return 0;
}