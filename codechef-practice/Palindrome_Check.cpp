#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(n);
        //  map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        bool flag=true;

        int l=0,r=n-1;
        while (l<r)
        {
            if(v[l]==v[r]){
                l++; r--;
            }
            else if(v[l]!=v[r]){
                if(v[l]==k){
                  l++;
                }
                else if(v[r]==k){
                  r--;
                }
                else{
                flag=false;
                break;
                }
            }
        }
        



        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
       
        
    }
    
    return 0;
}