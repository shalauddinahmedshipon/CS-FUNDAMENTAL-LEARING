#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,a,b; cin>>n>>a>>b;
        vector<int> v(n);
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        bool isJacketWear=false;
        for (int i = 0; i < n; i++)
        {
           if(v[i]<a&&!isJacketWear){
            isJacketWear=true;
            cnt++;
           }
           else if(v[i]>b&&isJacketWear){
            isJacketWear=false;
           }
        }

        cout<<cnt<<endl;
        
    }
    
    return 0;
}