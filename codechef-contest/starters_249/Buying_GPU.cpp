#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int x,y,z; cin>>x>>y>>z;
        if(y>=z){
            cout<<-1<<endl;
            continue;
        }

        int income=0,month=0;
    
        while (income<x)
        {
            x+=y;
            income+=z;
            month++;
        }
        
        cout<<month<<endl;

    }
    
    return 0;
}