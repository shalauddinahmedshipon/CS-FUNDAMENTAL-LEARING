#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int opt=0,i=0;

        while (i<n)
        {
           if(s[i]=='W') i++;
           else{
            opt++;
            i=i+k;
           }
        }

        cout<<opt<<endl;
        

    }
    
    return 0;
}