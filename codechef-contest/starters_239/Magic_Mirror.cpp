#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t ;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        bool flag=true;
        int l=(n/2)-1,r=n/2;
        while(l>0&&r<n){
            if((v[l]-v[l-1])!=(v[r+1]-v[r])){
                flag=false;
                break;
                
            }
            l--,r++;
        }

        if(v.size()==2) cout<<"Yes"<<endl;
        else if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
    
    return 0;
}