#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        float x,y; cin>>x>>y;
       int res=0;

        for (float i = x; i >y; i--)
        {
            int t=ceil(i/10);
            res+=t;

        }

        cout<<res<<endl;
        

    }
    
    return 0;
}