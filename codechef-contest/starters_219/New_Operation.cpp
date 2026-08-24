#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v1(n),v2(n);
        for (int i = 0; i <n; i++)
        {
            cin>>v1[i];
            v2[i]=v1[i];

        }

        int mn,mx;
        for (int i = 0; i < n-1; i++)
        {
            int r=v1[i]+(2*v1[i+1]);
            v1[i+1]=r;
            mn=r;
        }

        for (int i = n-2; i >= 0; i--)
        {
            int r=v2[i]+(2*v2[i+1]);
            v2[i]=r;
            mx=r;
        }


        cout<<mn<<" "<<mx<<endl;

        
        
        
    }
    return 0;
}