#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        while (n)
        {
            n=n/2;
            count++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}