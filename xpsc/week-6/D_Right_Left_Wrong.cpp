#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> v(n),preSum(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            preSum[i]=v[i];
        }
        for (int i = 1; i < n; i++)
        {
            preSum[i]+=preSum[i-1];
        }

        string s;
        cin>>s;
        int l=0,r=n-1;
        ll sum=0;
        while (l<r)
        {
            if(s[l]=='R') l++;
            if(s[r]=='L') r--;
            if(s[l]=='L'&&s[r]=='R'){
                sum+=preSum[r];
                if(l!=0){
                 sum-=preSum[l-1];
                }
                l++;r--;
            }
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}