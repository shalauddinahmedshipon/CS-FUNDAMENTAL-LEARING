#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t; 
    while (t--)
    {
        int n; cin>>n; 
        string s; cin>>s;
        vector<float> v;
        int cnt=0;
        for (int i = 0; i <= n; i++)
        {
            if(s[i]=='#'){
               cnt++;
            }
            else{
                v.push_back(cnt);
                cnt=0;
            }

            if(i==n){
                v.push_back(cnt);
            }
        }

        sort(v.rbegin(),v.rend());

        float mx=v[0];

        int total=0;
        if(mx>1){
            total=ceil(mx/2);
        }
        else if(mx==1){
            total=1;
        }

       


        cout<<total<<endl;

        
    }
    
    return 0;
}