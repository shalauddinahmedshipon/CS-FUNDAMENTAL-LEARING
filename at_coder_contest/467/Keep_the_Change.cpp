#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int totalChanges=0,takeChanges=0;
    while (n--)
    {
        int a,b; string s;
        cin>>a>>b>>s;
        totalChanges+=(b-a);
        if(s=="take"){
            takeChanges+=(b-a);
        }

       
    }

     cout<<totalChanges-takeChanges<<endl;
    
    return 0;
}