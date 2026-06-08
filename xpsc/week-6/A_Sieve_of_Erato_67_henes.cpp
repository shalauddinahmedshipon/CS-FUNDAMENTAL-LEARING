#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        bool isOneExist=false,isSixtySevenExist=false;
        for (int i = 0; i < n; i++)
        {
             int x;
             cin>>x;
            //  if(x==1) isOneExist=true;
             if(x==67) isSixtySevenExist=true;
        }

        if(isSixtySevenExist) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }
    
    return 0;
}