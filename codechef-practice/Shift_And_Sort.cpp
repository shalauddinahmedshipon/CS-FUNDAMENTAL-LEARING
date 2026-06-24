#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(auto &i:v) cin>>i;
        for (int i = 0; i < n-1; i++)
        {
            if(v[i]>v[i+1]){
                int total= v[i]+v[i+1];
                int half=total/2;
                v[i]=half;
                v[i+1]=total-half;
                i++;
            }
        }

        bool flag = true;
        for (int i = 1; i <n; i++)
        {
            if(v[i]<v[i-1]) {
                flag=false;
            }
        }
        
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}