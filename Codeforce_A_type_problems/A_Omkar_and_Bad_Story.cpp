#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int mx=INT_MIN;
        bool flag=true;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            mx=max(x,mx);
            if(x<0) flag=false;
        }

        if(!flag){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<mx+1<<endl;
            for (int i = 0; i <=mx; i++)
            {
                cout<<i<<" ";  
            }
            cout<<endl;
            
        }
        
    }
    
    return 0;
}