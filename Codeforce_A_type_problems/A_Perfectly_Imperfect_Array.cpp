#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       bool flag=false;
       for (int i = 0; i < n; i++)
       {
        int x;
        cin>>x;
        int y=sqrt(x);
        if(y*y!=x) flag=true;
       }
       if(flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    
    return 0;
}