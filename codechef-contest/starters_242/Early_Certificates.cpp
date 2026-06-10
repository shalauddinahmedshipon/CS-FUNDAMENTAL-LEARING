#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string a,b,c;
        cin>>a>>b;
        int mn=min(n,m);
        for (int i = 0; i < mn; i++)
        {
            if(a[i]!=b[i]) break;
            c.push_back(a[i]);
        }
        
       cout<<c<<endl;
    }
    
    return 0;
}