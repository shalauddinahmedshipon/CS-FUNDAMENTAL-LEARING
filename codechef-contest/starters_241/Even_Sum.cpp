#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }

        bool flag=false;
        for (int i = 0; i < n; i++)
        {
           int ans=sum-v[i];
           if(ans%2==0){
            flag=true;
            break;
           }
        }
        
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }
    
    return 0;
}