#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> b(n-1);
        for(auto &i:b) cin>>i;

        vector<int> a;
        a.push_back(b[0]);
       
        for (int i = 0; i < n-1; i++)
        {
            a.back()=a.back()|b[i];
            a.push_back(a.back()&b[i]);
        }

        int flag=0;
        for (int i = 0; i < n-1; i++)
        {
            if(b[i]!=(a[i]&a[i+1])){
                flag=1;
            }
        }

        if(flag) {
            cout<<-1;
        }else{
            for(auto x:a) cout<<x<<" ";
        }
        cout<<endl;
        
        
    }
    
    return 0;
}