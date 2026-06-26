#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int b=1<<(__lg(n));
        int a=n-b;
        cout<<a<<" "<<b<<endl;

    }
    
    return 0;
}