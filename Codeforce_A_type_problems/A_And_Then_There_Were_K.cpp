#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       int r=1;
       while (r<=n)
       {
           r*=2;
       }
       r/=2;
       r--;
       cout<<r<<endl;
    }
    
    return 0;
}