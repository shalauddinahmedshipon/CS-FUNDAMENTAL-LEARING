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
        for(auto &i:v) cin>>i;
        bool flag=false;
        int x,y,mx=v[0];
        for (int i = 1; i < n; i++)
        {
            if(mx>v[i]){
                flag=true;
                x=mx;
                y=v[i];
                break;
            }
            mx=max(mx,v[i]);
        }
        
        if(flag){
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<x<<" "<<y<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}