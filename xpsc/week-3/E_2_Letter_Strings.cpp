#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> v(n);
        map<string,long long int> mp;
        map<char,long long int> foc;
        map<char,long long int> soc;

        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
            foc[v[i][0]]++;
            soc[v[i][1]]++;
        }

        long long int ans=0;
        for(int i=0;i<n;i++){
           long long int x=max((long long int)0,foc[v[i][0]]-mp[v[i]]);
           ans+=x;
           x=max((long long int)0,soc[v[i][1]]-mp[v[i]]);
           ans+=x;
           if(mp[v[i]]>0)  mp[v[i]]--;
           if(foc[v[i][0]]>0) foc[v[i][0]]--;
           if(soc[v[i][1]]>0) soc[v[i][1]]--;

        }

         cout<<ans<<endl;

    }
    return 0;
}