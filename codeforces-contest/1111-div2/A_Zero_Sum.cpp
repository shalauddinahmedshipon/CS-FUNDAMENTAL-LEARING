#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        if(n%2==1){
            cout<<"NO"<<endl;
            continue;
        }

        int cnt=mp.begin()->second;

        if(abs((n/2)-cnt)%2==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
}