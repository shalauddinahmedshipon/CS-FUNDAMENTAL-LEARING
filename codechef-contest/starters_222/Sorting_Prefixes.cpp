#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n+1);

        for (int i = 1; i <= n; i++)
        {
            cin>>v[i];
        }

        int cost=0;

        for (int i = n; i > 0; i--)
        {
            if(v[i]!=i){
                cost=v[i];
                break;
            }
        }

        cout<<cost<<endl;
        
        

    }
    
    return 0;
}