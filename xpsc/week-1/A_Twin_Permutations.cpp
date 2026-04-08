#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v1;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
           v1.push_back(x);
           v.push_back(x);

        }

        int cns=n+1;

        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(v1[i]+v[j]==cns){
                    res.push_back(v[j]);
                }
            }
            
        }

       for (int x:res)
       {
         cout<<x<<" ";
       }
       
        cout<<endl;
        
    }
    
    return 0;
}