#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        int p=0;
        for (int i = 0; i < k; i++)
        {
            if(v[i]>5){
                p+=(v[i]-5);
            }
        }

        for (int i = k; i < n; i++)
        {
            if(v[i]>10){
                p+=(v[i]-10);
            }
        }
        
        cout<<p<<endl;
    }
    
    return 0;
}