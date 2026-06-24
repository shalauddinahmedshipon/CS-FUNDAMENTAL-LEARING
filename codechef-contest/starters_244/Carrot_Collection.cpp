#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,l,r; cin>>n>>l>>r;
        vector<int> v(n+1);
        for (int i = 1; i <=n; i++)
        {
            cin>>v[i];
        }

        int sum1=0,sum2=0;
        for (int i = 1; i <= n; i++)
        {
            if(i<l){
                sum1+=v[i];
            }

            if(i>r){
                sum2+=v[i];
            }

        }

        int ans =max(sum1,sum2);

        cout<<ans<<endl;
        
        
    }
    
    return 0;
}