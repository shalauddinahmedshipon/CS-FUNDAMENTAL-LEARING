#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n),preSum(n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    preSum[0]=v[0];

    for (int i = 1; i < n; i++)
    {
        preSum[i]=preSum[i-1]+v[i];
    }
    
    int q; cin>>q;

    while (q--)
    {
        int m; 
        cin>>m;

        auto it=lower_bound(preSum.begin(),preSum.end(),m);
        
        int pos= it-preSum.begin()+1;

        cout<<pos<<endl;

    
    }
    

    return 0;
}