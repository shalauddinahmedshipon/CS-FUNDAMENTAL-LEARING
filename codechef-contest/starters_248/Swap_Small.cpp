#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n),res;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int zero=0;
        for(int x:v){
            if(x==0) zero++;
            else res.push_back(x);
        }

        while (zero--)
        {
            cout<<0<<" ";
        }

        for(int x:res){
            cout<<x<<" ";
        }
        

       
        cout<<endl;
        
        
    }
    
    return 0;
}