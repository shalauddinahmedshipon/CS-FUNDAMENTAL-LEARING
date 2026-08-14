#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v1(n),v2(n);

        int res=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v1[i];
            res+=v1[i];
        }

        int mnDf=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>v2[i];
            int df=v1[i]-v2[i];
            mnDf=min(df,mnDf);
        }

        cout<<res-mnDf<<endl;
        
    }
    
    return 0;
}