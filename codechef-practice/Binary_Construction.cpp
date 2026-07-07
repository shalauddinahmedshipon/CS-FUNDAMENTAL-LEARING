#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n==2){
            cout<<"01"<<endl;
        }
        else
        {
            
            string s;
            for (int i = 0; i < n; i++)
            {
                if(i==0||i==n-1){
                    s.push_back('1');
                }
                else{
                    s.push_back('0');
                }
            }
            
            cout<<s<<endl;
        }
    }
    
    return 0;
}