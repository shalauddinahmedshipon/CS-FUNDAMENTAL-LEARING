#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> v;
        while (n--)
        {
            int c;
            cin>>c;
            v.push_back(c);
        }

        sort(v.begin(),v.end());

        int res=0;



        for(int i=v.size()-1;i>=0;i--){
            if(v[i]%x==0){
                res=v[i];
                break;
            }
           
        }
        

        cout<<res<<endl;
        
    }
    
    return 0;
}